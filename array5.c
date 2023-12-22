#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j;
printf("enter 10 elements in an array :\n");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the position :\n");
scanf("%d",&j);
for(i=0;i<10;i++)
{
    if(j==i)
    {
printf("%d",a[i]);
}}
getch();
}