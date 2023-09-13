#include<stdio.h>
int main(){
    int i,n,j,x=0,a[100];
    printf("enter the array size :\n");
    scanf("%d",&n);
    printf("enter the array elements :\n");
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The prime numbers are :\n");
    for(i=0;i<=n;i++){
        x=0;
        for(j=1;j<=a[i];j++){
            if(a[i]%j==0){
                x++;
            }
        }
        if(x==2)
            printf("%d\n",a[i]);
        }

}