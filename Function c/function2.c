#include<stdio.h>
#include<conio.h>
void sum(int a[3][3] ,int b[3][3],int,int );
int main()
{
    int a[3][3],i,j,b[3][3];
    printf("enter the elements in 1st array :\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
    scanf("%d",&a[i][j]);
}}
printf("enter the elements in 2nd array :\n");
for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
    scanf("%d",&b[i][j]);
}}
sum(a,b,i,j);
return 0;

}
void sum(int a[3][3], int b[3][3],int i,int j)
{
    int c[3][3],row,col;
    printf("finally sum is :\n");
    for(row=0;row<3;row++)
    {
     for(col=0;col<3;col++)
     {
    c[row][col]=a[row][col]+b[row][col];
    printf("%d\t",c[row][col]);
     }
    printf("\n");
}
getch();
}