#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,temp;
printf("enter 5 elements in an array :\n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("the asending order is \n");
for(i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
printf("%d\t",a[i]);
}
getch();
}
