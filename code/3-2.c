#include <stdio.h>
#include <stdlib.h>

int cmp_asc(const void *a, const void *b)
{
    int left = *(const int *)a;
    int right = *(const int *)b;

    return (left > right) - (left < right);
}

int cmp_desc(const void *a, const void *b)
{
    int left = *(const int *)a;
    int right = *(const int *)b;

    return (right > left) - (right < left);
}

void print_array(const int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[] = {5, 2, 9, 1, 8, 3};
    int size = (int)(sizeof(arr) / sizeof(arr[0]));

    qsort(arr, size, sizeof(arr[0]), cmp_asc);
    print_array(arr, size);

    qsort(arr, size, sizeof(arr[0]), cmp_desc);
    print_array(arr, size);

    return 0;
}
