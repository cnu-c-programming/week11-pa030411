#include <stdio.h>

typedef int (*BinOp)(int, int);

int add(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}

int main(void)
{
    BinOp ops[] = {add, mul};

    printf("%d\n", ops[0](3, 4));
    printf("%d\n", ops[1](3, 4));

    return 0;
}
