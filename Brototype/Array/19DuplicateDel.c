#include<stdio.h>
int main() {
    int i,n,a[100],j,k;
     
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

        }
        
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if (a[i]==a[j]&&i!=j)
        {
            for(k=j;k<n;k++){
            a[k]=a[k+1]; 
            }
        }

        }
        n--;
        j--;
        
    }
    printf("after deleting repeated elenments :\n");
    for (i=0;i<n;i++){
        printf("%d\n",a[i]);
 
    }
}