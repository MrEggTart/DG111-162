#include <stdio.h>
int main() {
    printf("=== Enter Data ===\n");
    char Name[100];
    int Max_Health;
    int Attack_Power;
    int Defence;
    int Level;
    int Power_score;
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
    Power_score = (Attack_Power*2) + Defence + (Max_Health/10);
    printf("\n\n=== CHARACTER SHEET ===\n");
    printf("╔══════════════════════════════╗\n");
    printf("║ %-29s║\n", Name);
    printf("╠══════════════════════════════╣\n");
    printf("║ Level\t:\t%-15d║\n", Level);
    printf("║ HP\t:\t%d/%-10d║\n", Max_Health,Max_Health);
    printf("║ Atk\t:\t%-15d║\n", Attack_Power);
    printf("║ Def\t:\t%-15d║\n", Defence);
    printf("╠══════════════════════════════╣\n");
    printf("║ %-15s    ║\n", "HP Bar: [██████████] 100%");
    printf("║ Power Score: %-15d ║\n" , Power_score);
    printf("╚══════════════════════════════╝\n");
    return 0;
} 