#include<stdio.h>
int main() {
    int i,n,a[100],freq[10000],x=0; 
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[a[i]]++;
        }
        
    for(i=0;i<n;i++){
        if (freq[a[i]]>1)
        {
            a[x]=a[i];
            x++;
        }
    }
    printf("after deleting unique elemnts :\n");
    for (i=0;i<x;i++){
        printf("%d\n",a[i]);

    }
    }