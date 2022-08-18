//5. Read a no to check prime ( a no divisible by 1 and itself)
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,flag=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<n/2;i++)
    {
    if(n%i==0)
    {
        printf("it isnot prime");
        flag=1;
        break;
    }
    }
    if(flag==0)
    {
        printf("it is prime");
    }
    
}