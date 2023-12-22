#include<stdio.h>
#define swap(a,b)a^=b^=a^=b
void main()
{
int a,b;
printf("enter the value of a : \n");
scanf("%d",&a);
printf("enter b: \n");
scanf("%d",&b);
swap(a,b);
printf("swap value=%d and %d",a,b);
}