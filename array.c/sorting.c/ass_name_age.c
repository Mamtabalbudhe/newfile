#include <stdio.h>
#include<string.h>
 
void  main()
{
   int age[100],n,c, d,p, position, swap,temp,i,j;
   char brr[100][100] ,s[100];
 
   printf("Enter number of person\n");
   scanf("%d", &n);
 
   printf("Enter %d person name\n", n);
      for ( d = 0; d < n; d++)
      {
        scanf("%s", &brr[d]);
      }

   printf("Enter %d person age\n", n);
   
 
   for ( c = 0 ; c < n ; c++ )
   {

      scanf("%d", &age[c]);
   }
   //    for ( d = 0; d < n; d++)
   //    {
   //      printf("%s", brr[d]);
   //  }                                            
    // by using selection sort

     for (i = 0 ; i < ( n - 1 ); i++)
    {
        for (j = 0 ; j < n - i - 1; j++)
        {
         if(strcmp(brr[j],brr[j+1])>0)
         {
                strcpy(s,brr[j]);
                strcpy(brr[j],brr[j+1]);
                strcpy(brr[j+1],s);
                 temp=age[j];
                age[j]=age[j+1];
                age[j+1]=temp;
                
         }
      }
    }
    printf("\nThe sorted order of names are:\n");
   for(d=0;d<n;d++){
      printf("%s\t %d\n",brr[d],age[d]);
   }
    // for(c=0;c<n;c++)
    // {
    //     for(p=c+1;p<n;p++)
    //     {
    //      if(strcmp(brr[c],age[p])>0)
    //      {
    //         strcpy(s,srr[c]);
    //         strcpy(arr[c],arr[p]);
    //         strcpy(arr[p],s);
    //      }
    //   }
    // }
    //   if(brr[d]!=' ')
    //   {
    //       for ( d = 0; d < strlen(brr); d++)
    //       {
    //           for ( p = 0; p < d; p++) 
    //     {
    //         if(brr[d]==brr[d+1]);
    //     }
    //       }
          
    //   }
      
}