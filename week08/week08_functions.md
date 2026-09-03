# Week 8 — Functions Reference

**Function Reference — `ex02_game_utils.c`**

| Function                                    | ทำหน้าที่                                                 | Returns                      |
| ------------------------------------------- | ------------------------------------------------------------------ | ---------------------------- |
| `int clamp(int value, int min, int max)`  | จำกัดค่า value ให้อยู่ระหว่าง min และ max | ค่าที่ clamp แล้ว  |
| `float lerp(float a, float b, float t)`   | Linear interpolation ระหว่าง a และ b ตาม t            | ค่าที่คำนวณได้ |
| `int randomRange(int min, int max)`       | สุ่มตัวเลขระหว่าง min และ max                  | ค่าสุ่ม               |
| `float percentOf(int current, int total)` | คำนวณเปอร์เซ็นต์                                   | ค่าเปอร์เซ็นต์ |

## คำถาม Reflection — Exercise 2

### 2.1 `clamp` — Pass by Value

**คำถาม:** ทำไม `hp` ใน `main()` ถึงยังเป็น 150 ทั้งที่ `value` ใน `clamp()` ถูกเขียนทับเป็น 100 ไปแล้ว?

**คำตอบ: เพราะถูก clamp ไว้ไม่ให้ค่ามันเกิน 100 และไม่น้อยกว่า 0 ทำให้แม้จะ int เข้ามา 150 แต่ value ที่ได้จะแสดงได้ไม่เกิน 100**

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ: เพราะ result ถูกประกาศไว้ใน function lerp ภายนอก main() ทำให้ไม่พบ result ภายใน main()** 

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ: เพราะเราแค่ใช้  diceMinเป็นค่าหลัก และใช้ min ในการคำนวณ โดยการดึงค่าของdiceMinมาใช้คำนวณ ถึงจะเปลี่ยนค่าminไป แต่diceMinก็ยังคงมีค่าเท่าเดิม**

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ: เพราะค่าของ score  ได้มาจาก  function percentOf  ถึงแม้จะเปลี่ยนค่าของ  current  ไป ก็ไม่ส่งผลกับค่าของ  score**
