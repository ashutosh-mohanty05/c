#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,sum=0;
printf("enter 5 elements in an array :\n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
    sum=sum+a[i];
}
printf("%d",sum);

getch();
}
