#include<stdio.h>
int main() {
    int i,n,a[100],sum,j,c,avg; 
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("unique elements :\n");
    for(i=0;i<n;i++){
      c=0;
      for(j=0;j<n;j++){
        if(a[i]==a[j]&& i!=j){
          c=1;
          break;

        }
      }
    if(c==0){
    printf("%d\n",a[i]);
    }
    }
    printf("avg =");
    for(i=0;i<n;i++)
    {
        sum +=a[i];
    }
    avg=sum/n;
    printf("%d",avg);
   return 0;
    }