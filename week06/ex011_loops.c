#include<stdio.h>
int main(){
  printf("for loop:\n");
   for (int i = 1; i <= 10; i++) { 
    printf("%d\n", i);
  }
  printf("while loop:\n");
  int i = 1;
  while (i <= 10) {
    printf("%d\n", i);
    i++;
  }
  printf("do while loop:\n");
  i = 1;
  do {
    printf("%d\n", i);
    i++;
  } while(i <=10);
  printf("sum of 1 to 10:\n");
  int sum = 0;
  for (int i = 1; i <=10; i++) {
    sum += i;
    printf("%d\n", sum);
  }
  return 0;
}