#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
int a,b;
printf("enter the value of a and b\n");
scanf("%d%d",&a,&b);
add(a,b);
}
void add(int x,int y)
{
    int z;
    z=x+y;
    printf("%d",z);

}