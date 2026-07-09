#include <stdio.h>
int main() {
    printf("=== Enter Data ===\n");
    char Name[100];
    int Age;
    float GPA;
    char Favorite_Subject[100];
    printf("Enter Name: ");
    scanf("%s", Name);
    printf("Enter Age: ");
    scanf("%d", &Age);
    printf("Enter GPA: ");
    scanf("%f", &GPA);
    printf("Enter Favorite Subject: ");
    scanf("%s", &Favorite_Subject);
    printf("\n\n=== Personal Information ===\n");
    printf("Name: %s\n", Name);
    printf("Age: %d\n", Age);
    printf("GPA: %.2f\n", GPA);
    printf("Favorite Subject: %s\n", Favorite_Subject);
    return 0;
}