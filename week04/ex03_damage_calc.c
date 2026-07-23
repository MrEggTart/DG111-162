#include<stdio.h>
#include<math.h>
int main()
{
    int Player_Damage;
    int Enemy_Defense;
    int Hit_Number;
    float Critical_Hit;
    int Enemy_Hp = 500;
    printf("Enter Player Damage: ");
    scanf("%d", &Player_Damage);
    printf("Enter Enemy Defense: ");
    scanf("%d", &Enemy_Defense);
    printf("Enter Hit Number: ");
    scanf("%d", &Hit_Number);
    Critical_Hit = Hit_Number % 5 == 0;

    if (Hit_Number % 5 == 0)
    {
         Critical_Hit = (float)ceil((float)(Player_Damage - Enemy_Defense) * 1.5f);
         printf("Damage: %.0f *** CRITICAL HIT! x1.5 *** \n", Critical_Hit);
         printf("Enemy Hp: %d \n", Enemy_Hp - (int)Critical_Hit);
    }
    else
    {
        float Damage = (float)(Player_Damage - Enemy_Defense);
        printf("Damage: %.0f (Normal) \n", Damage);
        printf("Enemy Hp: %d \n", Enemy_Hp - (int)Damage);
    }
    
    return 0;
}
