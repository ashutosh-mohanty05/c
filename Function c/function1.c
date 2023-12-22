#include<stdio.h>
#include<conio.h>
void add(void);
int main()
{
add();
}
void add(void)
{
    int x,y,z;
    printf("enter the numbers : \n");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("sum=%d",z);
    getch();
}
