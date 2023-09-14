#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=4;i++)
    {
      for(j=1;j<=5;j++)
      {
      printf("%d",(k++)%2);
    }
    printf("\n");
    }
 }