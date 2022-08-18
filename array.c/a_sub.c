#include<stdio.h>
#include<conio.h>
int main()
{
    int a[]={1,2,3};
    int i,s=0,max=0,min=10,avg=0;
    
    int n=sizeof(a)/4;
    for(i=0;i<n;i++)
    {
        printf(" %d \t %d \t \n",i,a[i]);

    // s=s+a[i];
    }
    for(i=0;i<n;i++)
    {
        s=a[i]+a[i+1];
    }
    printf("sum of array is %d\n",s);
    avg=s/n;
    printf("avg of array is %d\n",avg);
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("max of array is %d\n",max);
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("min of array is %d\n",min);
    return 0;
}  
