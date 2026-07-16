#include <stdio.h>
int main() 
{
    printf("=== Enter Data ===\n");
    int Weight;
    int Height;
    float BMI;
    printf("Enter Weight (kg): ");
    scanf("%d", &Weight);
    printf("Enter Height (cm): ");
    scanf("%d", &Height);
    printf("Enter Height (m): ");
    scanf("%f", &Height);
    BMI = Weight / (Height/100.0 * Height/100.0);
    printf("Your BMI is: %.2f\n", BMI);

    if (BMI < 18.5) 
    {
        printf("underweight.\n");
    } 
    else if (BMI >= 18.5 && BMI < 24.9) 
    {
        printf("normal.\n");
    } 
    else if (BMI >= 25 && BMI < 29.9) 
    {
        printf("overweight.\n");
    } 
    else if (BMI >= 30)
    {
        printf("obese.\n");
    }
    
    return 0;
}