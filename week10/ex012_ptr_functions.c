#include <stdio.h>
void getInput(int *p, const char *label)
{
    printf("%s: ", label);
    scanf("%d", p);
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    getInput(&a, "a");
    getInput(&b, "b");
    swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}