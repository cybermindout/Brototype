#include<stdio.h>
int main()
{
    int a[100],i,j,n,x=0,temp;
    printf("enter the number\n");
    scanf("%d",&n);
     printf("enter the elements\n");
     for(i=0;i<n;i++){
     scanf("%d",&a[i]);
     }
     for(i=0,j=n-1;i<n/2;i++,j--){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
            for(i=0;i<n;i++){
            if(a[i]%3!=0)
            {
                a[x]=a[i];
                x++;
            }
        }
       for(i=0;i<x;i++){
        printf(" %d",a[i]);
       }
     return 0;

}