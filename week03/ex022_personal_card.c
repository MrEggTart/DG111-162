#include <stdio.h>
int main() {
    printf("=== Enter Data ===\n");
    char Name[100];
    int Age;
    float GPA;
    char Major[100];
    printf("Enter Name: ");
    scanf("%s", Name);
    printf("Enter Age: ");
    scanf("%d", &Age);
    printf("Enter GPA: ");
    scanf("%f", &GPA);
    printf("Enter Major: ");
    scanf("%s", &Major);
    printf("\n\n=== Personal Information ===\n");
    printf("┌──────────────────────────┐\n");
    printf("│ Name\t\t: %-9s│\n", Name);
    printf("│ Age\t\t: %-9d│\n", Age);
    printf("│ GPA\t\t: %-9.2f│\n", GPA);
    printf("│ Major\t\t: %-9s│\n", Major);
    printf("└──────────────────────────┘\n");
    return 0;
}