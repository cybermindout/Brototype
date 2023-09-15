#include<stdio.h>
int main(){
    int i,a[100],n,x=0,sum=0,j;
    printf("enter the size :");
    scanf("%d",&n);
    printf("enter the array elements :\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    if(a[i]=j%2!=0)
   for(j=i;i<n-1;i++){
     a[i+1]=a[i];
        //x++;
   }
for(i=0;i<n;i++){
    sum+=a[i];
   }
    printf("sum : %d",sum);
   for(i=0;i<n;i++){
    
    printf("\n%d",a[i]);
   }
}