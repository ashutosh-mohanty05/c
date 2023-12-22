#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
int a,b;
printf("enter the numbers: \n");
scanf("%d%d",&a,&b);
sum(a,b);
getch();

}
int sum(int x,int y)                        //It is the copy of main value  ,  we can put any value here
{
    int c;
    c=x+y;
 printf("sum=%d",c);
    return c;
}