#include <stdio.h>
int main() {
    printf("=== ITEM SHOP ===\n");
    int Gold=1000;
    int item;
    typedef enum{
        HEALTH_POTION=1,
        MANA_POTION,
        Iron_Sword,
        Leather_Armor,
        Exit,
    } Item;
    printf("Gold : %d\n\n", Gold);
    printf("1. Health Potion \t- 50 Gold (+50 HP)\n");
    printf("2. Mana Potion \t\t- 80 Gold (+30 MP)\n");
    printf("3. Iron Sword \t\t- 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor \t- 300 Gold (+15 DEF)\n");
    printf("5. Exit\n\n");
    printf("Selected Item:\t ");
    scanf("%d",&item);

    printf("\n=== Purchase ===\n");
    switch(item){
        case HEALTH_POTION:
            printf("Health Potion: 50 Gold\n");
            printf("Gold Remaining: %d Gold\n", Gold-50);
            printf("Hp +50");
        break;
        case MANA_POTION:
            printf("Mana Potion: 80 Gold\n");
            printf("Gold Remaining: %d Gold\n", Gold-80);
            printf("Mp +30");
        break;
        case Iron_Sword:
            printf("Iron Sword: 500 Gold\n");
            printf("Gold Remaining: %d Gold\n", Gold-500);
            printf("ATK Bonus : +20");
        break;
        case Leather_Armor:
            printf("Leather Armor: 300 Gold\n");
            printf("Gold Remaining: %d Gold\n", Gold-300);
            printf("DEF Bonus : +15");
        break;
        case Exit:
            printf("Exit");
        break;
        default:
            printf("Invalid Item");    
    } 
    printf("\n\nItem purchased successfully! ");
    int selection;
int total = 0;
_Bool boughtSword = 0, boughtArmor = 0;
do {
printf("Select item: ");
scanf("%d", &selection);
switch (selection) {
case 3:
if (total + 500 > Gold ) printf("Not enough Gold!\n");
else { total += 500; boughtSword = 1; }
break;
case 4:
if (total + 300 > Gold) printf("Not enough Gold!\n");
else { total += 300; boughtArmor = 1; }
break;
// case 1, 2 ทาแบบเดียวกัน
}
} while (selection != 5);
if (boughtSword && boughtArmor) {
total = total * 90 / 100; // ลด 10%
printf("Warrior Bundle! (-10%%)\n");
}
    return 0;
}
