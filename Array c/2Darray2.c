#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j;
printf("enter the 9 elements :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("the result is :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if((i+j)%2==0)
        printf("%d\t",a[i][j]);
        else
        printf(" ");
    }
    printf("\n");
}
getch();
}