
#include<stdio.h>
#include<conio.h>
 int power(int,int);
  
  void main()
  {
      int b=2,r=5;
    ;
    //   printf("enter the number ");
    //   scanf("%d",&b);
      power(b,r);
      
  }
  int power(int b,int r)
  {
      int p=1;
      
      while (r>0)
      {
          p=p*b;
          r--;
      }
      printf("the power of the no=%d",p);
      
    }