#include <stdio.h>

int global_num = 5;
int global_arr[5];

int main(){
    int local_num = 10;
    int local_arr[10];

    printf("Size of global_num: %zu bytes\n", sizeof(global_num));
    printf("Size of global_arr: %zu bytes\n", sizeof(global_arr));
    printf("Size of local_num: %zu bytes\n", sizeof(local_num));
    printf("Size of local_arr: %zu bytes\n", sizeof(local_arr));

    return 0;
}