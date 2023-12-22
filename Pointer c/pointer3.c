#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",&a);
    printf("%d\n",a);
    getch();

}