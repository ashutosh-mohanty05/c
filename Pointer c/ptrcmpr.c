#include<stdio.h>
#include<conio.h>
void main()
{
    int list[5]={2,4,6,8,10};
    int*p1,*p2;
    p1=&list[1];
    p2=&list[3];
    if(p1<p2)
    {
        printf("%d is greater",*p2);
    }
    else
    printf("%d is greater",*p1);
    getch();
}
