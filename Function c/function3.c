#include<stdio.h>
int factorial(int);
void main()
{
    int number;
    printf("enter the positive number:\n");
    scanf("%d",&number);
    printf("factorial of %d = %d",number,factorial(number));
    getch();
}
int factorial(int n)
{
if (n==0||n==1)
{
    return 1;
}
else
{
    return n*factorial(n-1);
}
}
