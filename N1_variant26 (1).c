/* 26: количество элементов ниже среднего */
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
    int count = 0;

    /* Find the average. */
    for (i = 0; i < n; i++) {
        sum = sum + *(a + i);
    }
    average = sum / n;

    /* Count numbers smaller than the average. */
    for (i = 0; i < n; i++) {
        if (*(a + i) < average) {
            count++;
        }
    }

    printf("Average = %.2f\n", average);
    printf("Count below average = %d\n", count);

    return 0;
}
