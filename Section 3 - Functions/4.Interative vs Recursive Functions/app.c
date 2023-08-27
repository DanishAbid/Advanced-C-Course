#include <stdio.h>

int accumulate_i(int n);
int accumulate_r(int n);

/*
    acc(5) = 5 + 4 + 3 + 2 + 1

    Interative thinking:
    5 + 4 + 3 + 2 + 1

    Recursive thinking:
    5 + acc(4)
        4 + acc(3)
            3 + acc(2)
                2 + acc(1)
                    BASE CONDITION = 1

*/

int main(void)
{
    int n = 5;
    //int n = 50000000000000000; // recursion function exploits the memory stack. (segmentation fault error)

    int a = accumulate_i(n);
    printf("Iterative acc(%d) is %d\n", n, a);

    a = accumulate_r(n);
    printf("Recursive acc(%d) is %d\n", n, a);
}

int accumulate_i(int n)
{
    int a = 0;
    for(; n>0; n--)
    {
        a += n;
    }
    return a;
}


/**
 * IMPORTANT NOTES:
 * 
 * - Any Recursion implementaton should have a base condition (in the case we have "if(n==1)"), if there is no base condition the recursion
 * will never end at all. It will call itself forever.
 * 
 * - Calling the Recursive functions consumes the stack (memory). And depending on the recursion count, ocupy that amount of stack.
 * 
*/
int accumulate_r(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n + accumulate_r(n - 1);
    }
}