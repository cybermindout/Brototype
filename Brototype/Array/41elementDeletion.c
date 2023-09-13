#include <stdio.h>

   int main()
{
int i,limit,a[100],d;

printf("Enter the limit:");
scanf("%d",&limit);
printf("Enter the elements:");
for(i=0;i<limit;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the number to be deleted:");
scanf("%d",&d);

for(i=0;i<limit;i++)
{
    if(a[i]==d)
    {
        break;
    }
}
for(;i<limit-1;i++)
{
    if(a[i]=a[i+1])
    limit--;
    {
        printf("new array is:");
    }
    for(i=0;i<limit;i++)
    {
        printf("%d,",a[i]);
    }
}



    return 0;
}