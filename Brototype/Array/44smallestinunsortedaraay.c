#include<stdio.h>
int main()
{
    int a[100],i,j,n,small=10000;
    printf("enter the number\n");
    scanf("%d",&n);
     
     printf("enter the elements\n");
     for(i=0;i<n;i++){
     scanf("%d",&a[i]);
     }
        for(i=0;i<n;i++){
            if(a[i]<small)
            {
              small=a[i];
            }
        }
        printf(" %d",small);
       
     return 0;

}