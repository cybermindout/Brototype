#include<stdio.h>
int main(){
    int i,a[100],n,freq[100]={0},x=0,sum=0,avg=0;
    printf("ente the size of the array :\n");
    scanf("%d",&n);
    printf("enter the array elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[a[i]]++;
    }
    for(i=0;i<n;i++){
        if(freq[a[i]]==1)
        {
            a[x]=a[i];
            x++; 
        }  
    }
printf("avg = ");
    for(i=0;i<x;i++){
       sum=sum+a[i];
    }
    avg=sum/x;
    printf("%d ",avg);
}