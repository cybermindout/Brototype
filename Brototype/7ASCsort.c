#include<stdio.h>
int main(){
    int i,j,temp,a[10],n;
    printf("enter the size :");
    scanf("%d",&n);
    printf("enter the array elements :");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array is :");

    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
    }


}