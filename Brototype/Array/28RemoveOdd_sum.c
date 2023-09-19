#include<stdio.h>
int main(){
    int i,a[100],n,x=0,sum=0;
    printf("enter the size :");
    scanf("%d",&n);
    printf("enter the array elements :\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++){
    if(a[i]%2==0){
        a[x]=a[i];
        x++;
    }
   }
for(i=0;i<x;i++){
    sum=sum+a[i];
   }
    printf("sum : %d",sum);
   for(i=0;i<x;i++){
    
    printf("\n%d",a[i]);
   }
}