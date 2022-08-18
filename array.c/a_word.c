#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char z[100];
    int i,size=0;
    int j,c=1,k;
    
    printf("enter the string ");
    gets(z);
    
      printf("%s\n",z);
      char temp[300];
    temp[0]=' ';
    for(c=0;c<strlen(temp);c++)
    {
        temp[c+1]=z[c];
    }
      
       for (i=0;i<strlen(temp);i++)
     {
         if(temp[i]!=' ')
         {
             i++;

            if(temp[1]=='a' || temp[1]=='e' || temp[1]=='i' ||temp[1]=='o' ||temp[1]=='u')
		    {
                for (j=i;j<strlen(temp);j++)
                {
                    if(temp[j]!=' ')
                    {

                     printf("%c",temp[j]); 
                    
                    }  
                    else
                    {
                    i=j-1;
                    break;
                    }
                }
            }
        
        }
     printf(" "); 
    // for(c=0;c<strlen(temp);c++)
    // {
    //     temp[c+1]=z[c];
    // }
    }

}

    // for (i=0;i<strlen(temp);i++)
    // {
        

    //     if(temp[0]=='a' || z[0]=='e' || z[0]=='i' ||z[0]=='o' ||z[0]=='u')
	// 	{
    //        printf("%s\n",z);
    //     }
    // }
	// else 
	// 	 printf("%sno",z);
    // }

      
    
    