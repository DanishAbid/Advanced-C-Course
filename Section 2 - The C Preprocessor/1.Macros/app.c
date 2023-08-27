#include <stdio.h>

#define MY_AGE              24              // simple macro
#define MAX(a,b)            a>b ? a : b     // function-like macros
#define SQRT(n)             n*n             // function-like macros - incorrect working when passed for example 2+3
#define SQRT_CORRECTED(n)  (n)*(n)          // function like macro - working correctly

int main(void)
{
    printf("My age is %d.\n", MY_AGE);

    printf("Maximun of 2 and 3 is: %d \n", MAX(2,3));

    printf("Square Root: %d\n", SQRT(5));
    printf("Square Root: %d\n", SQRT(2 + 3)); 
    printf("Square Root: %d\n", SQRT_CORRECTED(2 + 3)); 

    printf("__LINE__ macro is called on line number: %d\n", __LINE__);
    printf("__FUNCTION__ macro is called in the function: %s\n", __FUNCTION__);
    printf("This file is compiled at: %s\n", __TIME__);
    printf("This file is compiled at: %s\n", __DATE__);
    printf("Calling the __COUNTER__ macro: %d\n", __COUNTER__);   // 0
    printf("Calling the __COUNTER__ macro: %d\n", __COUNTER__);   // 1
    printf("Calling the __COUNTER__ macro: %d\n", __COUNTER__);   // 2
    printf("Calling the __COUNTER__ macro: %d\n", __COUNTER__);   // 3
    printf("Calling the __COUNTER__ macro: %d\n", __COUNTER__);   // 4 and etc.
}