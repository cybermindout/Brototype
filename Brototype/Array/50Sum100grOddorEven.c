#include <stdio.h>

int main() {
    int i, a[100], n, x = 0, sum = 0, j;
    printf("Enter the size: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    if (sum > 100) {
        for (i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                for (j = i; j < n - 1; j++) {
                    a[j] = a[j + 1];
                }
                n--;
                i--;
            }
        }
    }

    if (sum < 100) {
        for (i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                for (j = i; j < n - 1; j++) {
                    a[j] = a[j + 1];
                }
                i--;
                n--;
            }
        }
    }

    printf("Sum: %d\n", sum);

    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
