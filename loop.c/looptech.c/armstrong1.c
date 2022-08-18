#include<stdio.h>
#include<conio.h>
void main()
{
    int n,temp,mult=1,rem,sum=0;
    printf("enter number");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        rem=n%10;
        mult=rem*rem*rem;
        sum=sum+mult;
        n=n/10;
        /* code */
    }
    if(sum==temp)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
}