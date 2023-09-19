#include<stdio.h>
int main()
{
    int a[100],i,j,n,lar=0;
    printf("enter the number\n");
    scanf("%d",&n);
     
     printf("enter the elements\n");
     for(i=0;i<n;i++){
     scanf("%d",&a[i]);
     }
        for(i=0;i<n;i++){
            if(a[i]>lar)
            {
              lar=a[i];
            }
        }
        printf(" %d",lar);
       
     return 0;

}