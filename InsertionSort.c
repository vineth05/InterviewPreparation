//Insertion Sort
#include<stdio.h>
int main()
{
    int n=5;
    int i,j;
    int a[]={34,17,8,52,76};
    int t;
    for ( i = 1; i<n; i++)
    {
       t=a[i];
       j=i-1;
       while (j>=0 && a[j]>t)
       {
           a[j+1]=a[j];
           j=j-1;
       }
       a[j+1]=t;
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
}