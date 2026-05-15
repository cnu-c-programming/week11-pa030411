#include <stdio.h>

typedef int (*BinOp)(int, int);

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int compute(int a, int b, BinOp op)
{
    if (op == NULL) {
        printf("Null pointer\n");
        return -1;
    }

    return op(a, b);
}

int main(void)
{
    printf("%d\n", compute(10, 5, add));
    printf("%d\n", compute(10, 5, sub));
    printf("%d\n", compute(10, 5, mul));
    printf("%d\n", compute(10, 5, NULL));

    return 0;
}
