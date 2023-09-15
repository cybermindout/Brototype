#include<stdio.h>
int main() 
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
      k=1;
      for(j=1;j<=11;j++)
      {
        if(j==7-i || j==5+i)
        {    
      printf("*");
        }
      else if(j%2!=0 && i==6)
      {
        printf("*");
      }
      else
      printf(" ");

    }
    printf("\n");
    }
 }