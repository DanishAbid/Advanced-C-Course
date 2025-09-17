#include <stdio.h>

int accumulate(int n);

int main(void)
{
    accumulate(10);
}

int accumulate(int n)
{
    int total = 0;
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;

    total = n + a + b + c + d + e;

    printf("total = %d\n", total);

    return total; 
}