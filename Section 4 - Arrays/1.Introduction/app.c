#include <stdio.h>

#define ARR_SIZE 5

const int g_num = 5;
int g_arr[] = {1, 5, 8, 9, 5, 2, 6, 0};

int main(void)
{
    int l_num = 10;
    int l_arr[l_num];
    int x = 9;

    printf("%lu\n", sizeof(g_arr));

    return 0;
}