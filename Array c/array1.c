#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
printf("enter 5 elements in an array :\n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("the elements are \n");
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
}
getch();
}
