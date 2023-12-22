#include<stdio.h>
void main()
{
    int i,j;
    for(i=5;i<=i;i--){
    for(j=1;j<=5-i;j++)
    {
        printf(" ");
    }
    for(j=5;j>=1;j--)
    {
        printf(" %d",j);
    }
    printf("\n");
}
}