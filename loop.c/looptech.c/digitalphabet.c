#include<stdio.h>
#include<conio.h>
void main()
{
     int n,sum=0,r;
    printf("enterb the number  :");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
        /* code */
    }
    n=sum;
    
    while(n>0)
    {
        r=n%10;
        /* code */
    switch(r)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
         break;
    case 3:
    printf("three");
    break;
    case 4:
    printf("four");
    break;
    case 5:
    printf("five");
    break;
    case 6:
    printf("six");
    break;
    case 7:
    printf("seven");
    break;
    case 8:
    printf("eight");
    break;
    case 9:
    printf("nine");
    break;
    case 0:
    printf("zero");
    break;
    default:
    break;
    }
    n=n/10;
    }
}
