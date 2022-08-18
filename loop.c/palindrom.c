//10. Read a no to check palindrom ( revese of no is equal to no )
#include<stdio.h>
#include<conio.h>
void main()
{
    int rem,a,n,rev;
    printf("enter the number");
    scanf("%d",&n);
    int ori=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(ori==rev)
    {
        printf("%d is palindrom number",rev);
    }
    else
    {
        printf("%d is not palindrom number",rev);
    }

}