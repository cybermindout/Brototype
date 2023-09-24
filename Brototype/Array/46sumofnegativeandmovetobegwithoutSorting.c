#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter array size\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    
    for(i=0;i<n;i++){
        if(a[i]==0){
           for(j=n-1;j>=0;j--){
            a[j+1]=a[j];
            
        } 
        a[0]=a[i+1];
        for(j=i+1;j<=n;j++){
            a[j]=a[j+1];
        }
        }
        
    }printf("\n\n");
    
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}