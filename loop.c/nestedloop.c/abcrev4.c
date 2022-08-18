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
        for(j=i;j<=n;j++)
        {
            printf("%c",(char)(j+96));
        }
        printf("\n");
        }
}