#include<stdio.h>
#include<conio.h>
int main()
{ 
    int hr,mn,sec;
printf("enter the hours");
scanf("%d",&hr);
for(hr=0;hr<12;hr++)
{
 for(mn=0;mn<60;mn++)
 {
 for(sec=0;sec<60;sec++)
 {
     printf("%d",hr);
 }
 }
}
return 0;
}