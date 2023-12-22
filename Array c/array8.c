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

for(i=0;i<10;i++)
{
    if(a[i]%2==0)
{
printf("%d",a[i]);
}}
getch();
}
