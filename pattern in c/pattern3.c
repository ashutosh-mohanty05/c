#include<stdio.h>
void main()
{
    int i,j/*,n*/;
   // printf("enter the number of rows");
   // scanf("%d",&n);
    for(i=1;i<=9;i++){
    for(j=1;j<=9;j++)
    {
        if(i==1||i==9||j==1||j==9||j==9-i+1||i==j)
        printf("*");
        else
        printf(" ");
    }
    printf("\n");
}
}