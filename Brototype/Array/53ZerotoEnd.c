#include <stdio.h>

int main() {
    int n,a[100],i,j,temp;

    printf("Enter the size of the aay: ");
    scanf("%d", &n);
    printf("Enter the elements of the aay:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        if (a[i] == 0) {
            for (j = i + 1; j < n; j++) {
                if (a[j] != 0) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }
            }
        }
    }
    printf("Array after moving zeros to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
