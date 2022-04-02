#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p,*q,c;
printf("enter two numbers :\n");
scanf("%d%d",&a,&b);
p=&a;
q=&b;
c=*p+*q;
printf("additiom is %d",c);
getch();

}
