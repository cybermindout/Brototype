#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0,j=0,temp;
    printf("enter the size array :");
    scanf("%d",&n);

    printf("enter the array elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<0){
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        
       // sum+=a[i];
       }
        j++;
    }
  //  printf("\n sum= %d",sum);
printf("negtive moved to begining \n");
    for(i=0;i<n+1;i++)
    
    printf("%d\n",a[i]);
    }