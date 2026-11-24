/* 24: индексы элементов со значениями выше k */
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

    int k;
    int found = 0;

    printf("Enter k: ");
    if (scanf("%d", &k) != 1) {
        printf("Input error.\n");
        return 1;
    }

    printf("Indices of elements above k: ");
    for (i = 0; i < n; i++) {
        if (*(a + i) > k) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (found == 0) {
        printf("none");
    }
    printf("\n");

    return 0;
}
