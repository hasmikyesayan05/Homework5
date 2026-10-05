#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *array = calloc(n, sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Array after calloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
        sum += array[i];
    }
    printf("\n");

    double average = (double)sum / n;

    printf("Average of the array: %.1f\n", average);

    free(array);

    return 0;
}
