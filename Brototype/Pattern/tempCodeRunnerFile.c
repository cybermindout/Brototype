#include<stdio.h.>
int main(){
   int i,j,k;
   for(i=1;i<=4;i++){
      for(j=1;j<=(i*2)-1;j++){
         printf("%c",i+64);

      }
      printf("\n");
      for(k=1;k<=i*2;k++){
         if(i==4)
         break;
         printf("%d",i);

      }
      printf("\n");
   }
}