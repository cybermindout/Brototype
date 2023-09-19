#include<stdio.h>
int main(){
    int i,n,a[100];
    printf("enter the array size :");
    scanf("%d",&n);
    printf("enter the array elements :\n");
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the reversed array elements are:\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }

}