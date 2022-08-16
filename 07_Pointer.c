#include<stdio.h>

void display(int a)
{
      int temp;
      temp = a*10;
      printf("The currrent value of variable i is :%d\n", a);
      printf("The value of variable i 10 times of its current value : %d ", temp);
}
int main()
{
    int i = 5;
    display(i);
    return 0;
}