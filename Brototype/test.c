#include <stdio.h>
int main()
{
    int i,j,k,p;
    
    for(i=1;i<=5;i++)
    {   p=1;
        for(j=1;j<=i;j++)
        {
            
            printf(" ");
        }
        for(k=i;k<=5;k++)
        {
            printf("%d ",p*i);
            p++;
        }
        printf("\n");
    }
    return 0;
}

//  1 2 3 4 5 
//   2 4 6 8 
//    3 6 9 
//     4 8 
//      5 