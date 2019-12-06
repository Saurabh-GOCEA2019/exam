#include<stdio.h>

int main()
{
    int x=10;
    int y=5;

    printf("Choose Operation to be perform +, -, *, /\n");

    int sum=x+y;
    printf("Sum :%d \n",sum);
    int diff=x-y;
    printf("Difference :%d \n",diff);
    int mul=x*y;
    printf("Multiplication :%d \n",mul);
    int div=x/y;
    printf("Division :%d \n",div);

    return 0;

}