#include <stdio.h>
int main() {
    printf("Enter your score :");
    int score;
    scanf(" %d", &score);
    if(score >=80){
        printf(" Grade:A  (4.0)");
    }
    else if (score >=75){
        printf(" Grade:B+ (3.5)");
    }
    else if (score >=70){
        printf(" Grade:B (3.0)");
    }
    else if (score >=65){
        printf(" Grade:C+ (2.5)");
    }
    else if (score >=60){
        printf(" Grade:C (2.0)");
    }
    else if(score>=55){
        printf("Grade:D+ (1.5)");
    }
    else if (score >=50){
        printf("Grade:D (1.0)");
    }
    else {
        printf("Grade:F (0.0)");

    }
    if(score >=50){
        printf(" -- Pass");
    }
    else{
        printf(" -- Fail");
    }
    
    return 0;
}