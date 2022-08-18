#include<stdio.h>
#include<conio.h>
#include<string.h>
void f1(char);
void main()
{
    
    char s[20];
    printf("enter the string");
    scanf("%s",s);
    f1(s);
}
  void f1(char s)
  {
      int i,c=0;
      for ( i = 0; i <strlen(s); i++)
    {
        if(s[i]!=' ' ||s[i]>=65 && s[i]<91 || s[i]>=97 && s[i]<123)
        c=c+1;
    }
    printf("%d",c);

  }  