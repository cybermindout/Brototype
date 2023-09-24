
#include <stdio.h>

int main() {
    int i, a[1000], n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        int fiveflag = 1;
    if(a[i]%5!=0){
       fiveflag=0;
    }
    else {
            if (fiveflag){
                for(int j=1;j<=2;j++){
                    a[i+j]=a[i+j+2];
                }n-=2;
            }
    }

    }

    printf("The new array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

