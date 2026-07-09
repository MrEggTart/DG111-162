#include <stdio.h>
int main() {
    printf("=== Enter Data ===\n");
    char Name[100];
    int Max_Health;
    int Attack_Power;
    int Defence;
    int Level;
    printf("Enter Name: ");
    scanf("%s", Name);
    printf("Enter Max Health: ");
    scanf("%d", &Max_Health);
    printf("Enter Attack Power: ");
    scanf("%d", &Attack_Power);
    printf("Enter Defence: ");
    scanf("%d", &Defence);
    printf("Enter Level: ");
    scanf("%d", &Level);
    printf("\n\n=== Character Summary ===\n");
    printf("Name\t:\t%s\n", Name);
    printf("Level\t:\t%d\n", Level);
    printf("HP\t:\t%d\n", Max_Health);
    printf("Atk\t:\t%d\n", Attack_Power);
    printf("Def\t:\t%d\n", Defence);
    return 0;
} 