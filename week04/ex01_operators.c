#include <stdio.h>

int main() 
{
    //ข้อ1.1
    printf("1. expression : 10 / 3 = %d\n", 10 / 3);

    int expression_1 = 10.0 / 3;
    printf("2. expression_1 : 10.0 / 3 = %d\n", expression_1);

    float expression_2 = 10.0/ 3;
    printf("3. expression_2 : 10.0 / 3 = %f\n", expression_2);

    int expression_3 = 10 % 3;
    printf("4. expression_3 : 10 %% 3 = %d\n", expression_3);

    int expression_4 = -7 % 3;
    printf("5. expression_4 : -7 %% 3 = %d\n", expression_4);

    int expression_5 = 7 % -3;
    printf("6. expression_5 : 7 %% -3 = %d\n", expression_5);

    //ข้อ1.2
    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);

    //ข้อ1.3
    printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("10 - 2 - 3 = %d\n", 10 - 2 - 3);
    printf("2*3 + 4*5 = %d\n", 2 * 3 + 4 * 5);
    
    return 0;
}