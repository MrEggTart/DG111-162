#include<stdio.h>
int main() {
    int n, i;
    int IsPrime = 1;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    if (n <= 1) {
        IsPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                IsPrime = 0;
                break;
            }
        }
    }
    if (IsPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number. (divisible by %d)\n", n , i);
    }
    return 0;
}