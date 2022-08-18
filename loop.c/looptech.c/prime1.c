// Looping Technique

// 1)Read a no to check prime or not 
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,count=0,i;
    printf("enter the number  :");
    scanf("%d",&n);
    i=2;
    while (i<=n/2)
    {
        //nn=n%10;
        //a=nn;
        //n=n/10;
        if(n%i==0)
        {
            count=1;
            break;
        }
        i++;
    }
        if(count==0)
        {
            printf("number is prime");
        }
        else
        {
            printf("number is not prime");
        }
}
    
    

// 2) Generate Fibonacci series for N terms    
// 3) Read a no to check Armstrong or not   
// 4) Read a Four Digit no to print it using Alphabets 
//     i.p 1234 o.p One Two Three Four