#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,count=1;
    char str[200];
    printf("enter the string :");
    gets(str);
    i=0;
    while (str[i]!='\0')
    {
        if(str[i]==' '&& str[i+1]!=' ')
        

           count++;
        
        i++;
    }
    printf("%d",count);
    
    // for ( i = 0; str[i]!='\0'; i++)
    // {
    //     if(str[i]==' ' || str[i+1]!=' ')
    //         count++;
    //  }
    //     printf("%d",count);
    return 0;
}