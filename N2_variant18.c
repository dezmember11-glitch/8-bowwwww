/* 18: разница максимума и минимума в диапазоне индексов */
#include <stdio.h>

int main(void) {
    int a[100];
    int n, i;

    printf("Enter array size (1..100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        if (scanf("%d", &a[i]) != 1) {
            printf("Input error.\n");
            return 1;
        }
    }

    int k, m;
    int minimum, maximum;

    printf("Enter indices k and m (from 0 to %d): ", n - 1);
    if (scanf("%d%d", &k, &m) != 2 || k < 0 || m >= n || k > m) {
        printf("Invalid indices.\n");
        return 1;
    }

    minimum = *(a + k);
    maximum = *(a + k);

    for (i = k; i <= m; i++) {
        if (*(a + i) < minimum) {
            minimum = *(a + i);
        }
        if (*(a + i) > maximum) {
            maximum = *(a + i);
        }
    }

    printf("Minimum = %d\n", minimum);
    printf("Maximum = %d\n", maximum);
    printf("Difference = %d\n", maximum - minimum);

    return 0;
}
