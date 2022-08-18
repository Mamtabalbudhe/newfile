//6. Read a no to check Armstrong (153 -- 1^3+ 5^3 + 3^3= 153 , sum of cube of all digits is equal to a no )
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,mult=1,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    int a=n;
    while (n>0)

    {
        r=n%10;
        mult=r*r*r;
        sum=sum+mult;
        n=n/10;
    }
    if(sum==a)
    {
        printf("%d is amrstrong number",a);

    }
    else
    {
        printf("%d is not armstrong number",a);
    }
}