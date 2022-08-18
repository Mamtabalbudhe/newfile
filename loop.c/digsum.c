//9. Read a no to find digital sum (i/p 1234 o/p 10)
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,a,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while (n>0)
    {
        
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf(" %d is the digital sum  ",sum);
}