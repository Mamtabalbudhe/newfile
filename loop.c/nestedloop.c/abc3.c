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

        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+j-1);
        }
        printf("\n");
        }
}