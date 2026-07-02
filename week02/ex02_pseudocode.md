BEGIN  [ตรวจสอบเกรด]

    INPUT SCORE

    IF SCORE >= 80 THEN

    PRINT "A"

    ELSE

    IF SCORE >=70 THEN

    PRINT "B"

    ELSE

    IF SCORE >= 60 THEN

    PRINT "C"

   ELSE 

   IF SCORE >= 50 THEN

    PRINT "D"

   ELSE

   IF SCORE <50 THEN

    PRINT "F"

   END IF

   OUTPUT  A & B & C & D & F

END



BEGIN [หาค่าสูงสุดจาก 2 ตัวเลข]

    INPUT a & b

    IF a > b THEN

    PRINT "a"

    ELSE

   IF a < b THEN

    PRINT "b"

   END IF

   OUTPUT a & b

END




 BEGIN [นับจาก 1 ถึงN]

    INPUT N

    i = 1

    WHILE  i <= N THEN

    PRINT "i"

    i = i + 1`

    ENDWHILE
