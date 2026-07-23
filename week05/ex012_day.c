#include<stdio.h>
int main(){
    int day;
    typedef enum{
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    } Day;
    printf("Enter day number :");
    scanf("%d",&day);
    switch(day){
        case sunday:
            printf("sunday");
            break;
        case monday:
            printf("monday");
            break;
        case tuesday:
            printf("tuesday");
            break;
        case wednesday:
            printf("wednesday");
            break;
        case thursday:
            printf("thursday");
            break;
        case friday:
            printf("friday");
            break;
        case saturday:
            printf("saturday");
            break;
        default:
            printf("Invalid day number");
    }
    if(day>=1 && day<=5){
        printf(" -- Weekday");
    }
    else if(day==0 || day==6){
        printf(" -- Weekend");
    }
    return 0;
}
