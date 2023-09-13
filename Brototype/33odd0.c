#include<stdio.h>
int main()
{
    int i,n,a[100],sum;
    
    printf("enter array size :\n");
    scanf("%d",&n);
    printf("enter the array elements :\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]%2!=0){
           a[i]=0;
        }
        else if(a[i]%2==0){
            sum=sum+a[i];
        }
        }
        printf("sum= %d\n",sum);
        for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }  
 }