/* 30: сумма элементов выше среднего */
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

    double sum = 0;
    double average;
    int result = 0;

    /* Find the average. */
    for (i = 0; i < n; i++) {
        sum = sum + *(a + i);
    }
    average = sum / n;

    /* Add numbers above the average. */
    for (i = 0; i < n; i++) {
        if (*(a + i) > average) {
            result = result + *(a + i);
        }
    }

    printf("Average = %.2f\n", average);
    printf("Sum above average = %d\n", result);

    return 0;
}
