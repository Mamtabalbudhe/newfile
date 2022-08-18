// 2) Generate Fibonacci series for N terms    
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1=0,n2=1,n3,i,n;
    printf("enter the VALUE  :");
    scanf("%d",&n);
    printf("%d",n1);
    printf("%d",n2);
    for(i=2;i<n;++i)
    {
        n3=n2+n1;
        //printf("%d",n2);
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }

}