#include<stdio.h>
#include<conio.h>
void main()
{
    void *p,*q;
    int a=10;
    char b='Z';
    p=&a;
    q=&b;
    printf("%d\n",*(int*)p);
    printf("%c",*(char *)q);
    getch();
}