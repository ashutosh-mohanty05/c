#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i;
printf("enter 10 elements in an array :\n");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
printf("the reverse order is \n");
for(i=9;i>=0;i--)
{
printf("%d",a[i]);
}
getch();
}