//4. Read a no to find factorial  n!=nx n-1 x n-2 .....1
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    printf("%d",fact);
    //return 0;
}