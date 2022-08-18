#include<stdio.h>
#include<conio.h>
//3. Read nos till their summation remains less than or equal to 100 . Count total nos entered.
void main()
{
    int no,sum=0,tno=0;
    
    while (sum<100)
    {
    printf("enter the no. :");
    scanf("%d",&no);
        
        sum=sum+no;
    //tno=no;
    tno++;
    }
    printf("sum %d",sum);
    printf("total :%d",tno);
    getch();
}