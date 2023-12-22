#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,sum=0;
printf("enter the 9 elements :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("the sum is :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        sum=sum+a[i][j];
    }
    printf("\n");
}
printf("%d",sum);
getch();
}