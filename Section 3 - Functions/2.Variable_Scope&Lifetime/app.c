#include <stdio.h>

/**
 * IMPORTANT NOTES:
 * 
 * - If the "static" keyword is used for a local variable it extends the lifetime of a local variable to the lifetime of the execution of 
 * the program.
 * 
 * - If the "static" keyword is used for a global variable it prevents the variable to be accessed from another source file (.c files).
 * 
 * - If a global variable is not "static", it can be accesible from another source file, using the keyword "extern".
 * 
*/

int accumulate(int n);
int accumulate_global_variable(int n);
int accumulate_static_variable(int n);

int total_global = 0;

int main(void)
{
    accumulate(10);
    accumulate(8);

    accumulate_global_variable(10);
    accumulate_global_variable(8);

    accumulate_static_variable(10);
    accumulate_static_variable(8);
}

int accumulate(int n){
    int total = 0;                                      // this is the local variable, so the lifetime of this variable will be the
                                                        // limited to the execution time of the function
    total += n;
    printf("%s: total = %d\n", __FUNCTION__, total);
}

int accumulate_global_variable(int n)
{
    total_global += n;                                  // this total_global variable is global, os the lifetime of this variable 
                                                        // will be the total time of the execution of the program not only the function                        
    printf("%s: total_global = %d\n", __FUNCTION__, total_global);
}

int accumulate_static_variable(int n)
{
    static int total_static = 0;                        // (lifetime as a global variable)this is the local variable but the lifetime of
                                                        // this variable is changed and now this variable will exist until the program
                                                        // finishes. The static keyword change the lifetime of this variable but the scope
                                                        // is still the same (it's a local variable)
    total_static += n;
    printf("%s: total = %d\n", __FUNCTION__, total_static);
}