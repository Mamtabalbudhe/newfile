#include<stdio.h>
#include<conio.h>
 
 int talsum(int);

void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    
   printf("%d is digital sum",talsum(n));

}
int talsum(int n)
{
    int sum=0,a;
    while (n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }

    return sum;
    
}