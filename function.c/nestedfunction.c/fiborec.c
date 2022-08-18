#include<stdio.h>
#include<conio.h>

void fib1();
int fib2(int,int,int,int);

int main()
{   
    fib1();
    return 0;
}

 void fib1()
 {  
    
    int n1=0,n2=1,n3,f;
    
    printf("enter the VALUE  :");
    scanf("%d",&f);
    printf("enter values of 1st and 2nd term  :");
    scanf("%d%d",&n1,&n2);
    //  printf("%d",n1);
    // printf("%d",n2);
    fib2(f,n1,n2,n3);
    //fib2(f,n1,n2,n3);
 }
 int fib2(int f,int n1,int n2,int n3)
 {
     
    int i;
    for(i=2;i<f;++i)
    {
        n3=n2+n1;
        //printf("%d",n2);
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }

 }