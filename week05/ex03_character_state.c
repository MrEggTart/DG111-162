#include<stdio.h>
int main(){
    int Max_HP;
    int Damage_Taken;
    int Is_poisoned=1;
    int Attack_Count;
    printf("Max HP : ");
    scanf("%d",&Max_HP);
    printf("Damage Taken : ");
    scanf("%d",&Damage_Taken);
    printf("Posioned (0/1): ");
    scanf("%d",&Is_poisoned);
    printf("Attack Count : ");
    scanf("%d",&Attack_Count);
    printf("\n=== Character Status ===\n");

    int Current_Hp= Max_HP - Damage_Taken;
    if (Current_Hp<=0){
        printf("State : Dead");
    }
     else if 
    (Current_Hp<= 25)
    {
        printf("Critical!!");
    }
    else if (Is_poisoned==1)
    {
        printf("Poison\n");
    }
    else
    {
        printf("State : Alive");
    }
    if (Attack_Count %5 ==0 && Attack_Count != 0)
    {
        printf("\tUltimate ready!!!");
    }
    return 0;
}