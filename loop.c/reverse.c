//8. Read  a no to print reverse 
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r=0,a;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
      //printf("%d",n%10);

        a=n%10;
        r=r*10+a;
        n=n/10;
    printf(" %d is the reverse number \n",r);
    }
}