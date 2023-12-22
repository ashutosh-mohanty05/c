#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],i,j,c[3][3];
printf("enter the 9 elements :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the 2nd array :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
c[i][j]=a[i][j]+b[i][j];
    }}
printf("the sum is :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
{
    printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}