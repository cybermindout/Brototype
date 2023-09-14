#include<stdio.h>
int main() 
{
    int i,j,k=0;
    for(i=1;i<=9;i++)
    {
      for(j=1;j<=9;j++)
      {
        if(i%2==0 || j==6-i || j==4+i)
      printf("* ");
      else
      printf("  ");
    }
    printf("\n");
    }
 }
