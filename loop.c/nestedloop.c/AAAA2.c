#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    char c[4];
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=26;j>=i;j--)
        {
            printf("%c",'A'-1+i);
        }
        printf("\n");
        }
}