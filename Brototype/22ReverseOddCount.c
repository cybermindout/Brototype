#include<stdio.h>
int main(){
    int i,j,n,a[100],temp,count=0;
    printf("enter the array size :");
    scanf("%d",&n);
    printf("enter the array elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i<(n/2);i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("reversed elements are :");
    for(i=0;i<n;i++){
        if(a[i]%2!=0)
        count++;
        printf("%d\t",a[i]);
    }
    printf("\ncount of odd numbers: %d",count);


}