#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,transpose[3][3];
printf("enter the 9 elements :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
   jb  }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
{
    transpose[j][i]=a[i][j];
    }
}
printf("the transpose is :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",transpose[i][j]); 
    }
    printf("\n");
}
getch();
}