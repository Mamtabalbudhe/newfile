#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("enterb the number  :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    
     switch (i)
     {
     case 1:
         printf("one\n");
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
     default:

         break;
    }
}
}