// #include<stdio.h>

// int main()
// {
//     int i,j,k;
//     for(i=1;i<=3;i++)
//     {
//       for(j=1;j<=1;j++)
//       {
//       printf("*");
//     }
//     printf("\n");
//     for(k=1;k<=i*3;k++)
//     {
//     printf("*");
//     if(k%3==0)
//     printf("\n");
//     }
//     }
//  }


// *
// ***
// *
// ***
// ***
// *
// ***
// ***
// ***


// #include<stdio.h>

// int main()
// {
//     int i,j,k;
//     for(i=1;i<=3;i++)
//     {
//       for(j=1;j<=5*i;j++)
//       {
//       printf("* ");
//     }
//     printf("\n");
//     for(k=1;k<=i*5;k++)
//     {
//       if(i==3)
//       break;
//     printf("*");
//     printf("\n");
//     }
//     }
//  }
 
 
// * * * * * 
// *
// *
// *
// *
// *
// * * * * * * * * * *
// *
// *
// *
// *
// *
// *
// *
// *
// *
// *
// * * * * * * * * * * * * * * *

// #include<stdio.h>

// int main()
// {
//     int i,j,k;
//     for(i=1;i<=3;i++)
//     {
//       for(j=1;j<=2*i;j++)
//       {
//       printf("* ");
//     }
//     printf("\n");
//     for(k=1;k<=i*3;k++)
//     {
//       if(i==3)
//       break;
//     printf("*");
//     printf("\n");
//     }
//     }
//  }
 
// * * 
// *
// *
// *
// * * * *
// *
// *
// *
// *
// *
// *
// * * * * * *


// #include<stdio.h>

// int main()
// {
//     int i,j,k;
//     for(i=1;i<=3;i++)
//     {
//       for(j=1;j<=3*i;j++)
//       {
//       printf("* ");
//     }
//     printf("\n");
//     for(k=1;k<=i;k++)
//     {
//     printf("*");
//     printf("\n");
//     }
//     }
//  }

// * * * 
// *
// * * * * * *
// *
// *
// * * * * * * * * *
// *
// *
// *

// #include<stdio.h>

// int main()
// {
//     int i,j,k;
//     for(i=1;i<=3;i++)
//     {
//       for(j=1;j<=i*3;j++)
//       {
//       printf("* ");
//       }
//       printf("\n");
      
    
//     for(k=1;k<=i*3;k++)
//     {
//       if(i==3)
//       break;
//     printf("* ");
    
//     printf("\n");
//     }
//     }
// }

// * * * 
// * 
// * 
// * 
// * * * * * * 
// * 
// * 
// * 
// * 
// * 
// * 
// * * * * * * * * * 

// #include<stdio.h>

// int main()
// {
//     int i,j,k;
//     for(i=1;i<=3;i++)
//     {
//       for(j=1;j<=i*5;j++)
//       {
//       printf("* ");
//       }
//       printf("\n");
      
    
//     for(k=1;k<=i*3;k++)
//     {
//       if(i==3)
//       break;
//     printf("* ");
    
//     printf("\n");
//     }
//     }
//  }

// * * * * * 
// *
// *
// *
// * * * * * * * * * *
// *
// *
// *
// *
// *
// *
// * * * * * * * * * * * * * * * 

// #include<stdio.h>

// int main()
// {
//     int i,j,k,m,n;
//     for(i=1;i<=4;i++)
//     {
//       m=i%2==0?2:1;
//       for(j=1;j<=m;j++)
//       {
//       printf("*\n");
//       }
  
//      n=i==3?2:0; 
    
//     for(k=1;k<=i*4-n;k++)
//     {
//       if(i==4)
//       break;
//     printf("* ");
//     }
//     printf("\n");
    
//     }
//  }

// *
// * * * *
// *
// *
// * * * * * * * *
// *
// * * * * * * * * * *
// *
// *


// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=3;i++)
//     {
//         for(k=1;k<=2*i*i;k++)
//         {
//             printf("*");
//             if(k%(2*i)==0)
//             printf("\n");
//         }
//         for(j=1;j<=3;j++)
//         {
//             if(i==3)
//             break;
//             else
//             {
//             printf("*");
//              printf("\n");
//             }
//         }
//    }  
// }


// **
// *
// *
// *
// ****
// ****
// *
// *
// *
// ******
// ******
// ******


// #include <stdio.h>
// int main() {
//     int i,j,k,m=1;
//     for(i=1;i<=3;i++){
//         for (j=1;j<=i*2;j++){
//             printf("%d",i);
//             if(j%2==0)
//             printf("\n");
           
//          }
              
//     for(k=1;k<=i+2;k++){
    
//         printf("%d",m);
//             m++;
              
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 11
// 123
// 22
// 22
// 4567
// 33
// 33
// 33
// 89101112


// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=3;i++)
//     {
//        for(j=1;j<=i+2;j++)
//         {
//            for(k=1;k<=j;k++)
//             {
//             printf("x");
//             }
//       printf("\n");
//         }  
//     }
// }

// x
// xx
// xxx
// x
// xx
// xxx
// xxxx
// x
// xx
// xxx
// xxxx
// xxxxx