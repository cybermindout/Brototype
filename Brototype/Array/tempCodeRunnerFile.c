#include<stdio.h>
int main(){
    int k,i,j,a[100],n,c;

    printf("enter the size of the aay");
    scanf("%d",&n);
     printf("enter the values");

     for ( i = 0; i < n; i++)
     {
        scanf("%d",&a[i]);  
     }
     for(i=0;i<n;i++){
        c=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
           c++;
            }
        }
        if(c==0 && a[i]!=1){
            if(i==n-1){
                n=n;//no change in index value cause this condition 
                //for last element is prime in aay remains n
            }
            else if(i==n-2){
                n=n-1;
            }
            else{
                for ( j = i; j < n; j++)
                {   
                    a[j+1]=a[j+3];
                    a[j+2]=a[j+4];
                }
                n=n-2;
            }
        }
     }
     for ( i = 0; i < n; i++){
        printf("%d",a[i]);
     }
     return 0;
}