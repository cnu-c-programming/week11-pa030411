#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_str(const void *a, const void *b)
{
    const char *left = *(const char *const *)a;
    const char *right = *(const char *const *)b;

    return strcmp(left, right);
}

int main(void)
{
    const char *words[] = {"banana", "orange", "ant", "apple"};
    int size = (int)(sizeof(words) / sizeof(words[0]));

    qsort(words, size, sizeof(words[0]), cmp_str);

    for (int i = 0; i < size; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
