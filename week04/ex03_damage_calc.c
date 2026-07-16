#include<stdio.h>
#include<math.h>
int main()
{
    int Player_Damage;
    int Enemy_Defense;
    int Hit_Number;
    float Critical_Hit;
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

    }
    else
    {
        float Damage = (float)(Player_Damage - Enemy_Defense);
        printf("Damage: %f (Normal) \n", Damage);
    }

    return 0;
}
