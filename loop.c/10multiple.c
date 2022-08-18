//Read a no to find 10 multiples
#include<stdio.h>
#include<conio.h>
void main()
{
    int n, p;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        p=n*i;
        printf("%d\n",p);
    }
}