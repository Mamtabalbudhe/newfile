#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i;
    char s[20];
    printf("enter the string");
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>65&&s[i]<91 || s[i]>97&&s[i]<123)
        {
            printf("characters are %d",s);
        }
        else 
        {
            printf("characters  not are %d",s);
        }
        
        
    }
}