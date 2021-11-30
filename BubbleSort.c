//Bubble Sort
#include<stdio.h>
int main()
{
    int n=6;
    int t;
    int i,j;
    int a[]={21,69,15,33,52,48};
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
               if(a[j]>a[j+1])
               {
                   t=a[j+1];
                   a[j+1]=a[j];
                   a[j]=t;
               }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}