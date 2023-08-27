/** C Functions **/

/**
 * C Programming - Uses Structured Paradigm
 * 
 * - That means the program is composed of different sub-programs or sub-rutines
 * where each of them is responsible of doing a specific thing.
 * 
 * - The Lifetime of a local variable is asociated with the existence of a function,
 * it means that the variable will exist in memory while the function is in execution.
 * 
 * - The Lifetime of a global variable is asociated with the execution of the whole program,
 * that means the variable will exist all the time the program is in execution. And it will be available 
 * for all the function in the program.
*/

#include <stdio.h>

/*Private Macro*/
#define NUMBER  9

/*Function Prototype*/
int is_even(int n);

/*Main Function*/
int main(void)
{
    int my_number = is_even(NUMBER);

    if(my_number == 1){
        printf("The number %d is even.", NUMBER);    
    }
    else{
        printf("The number %d is odd.", NUMBER); 
    }
    
}

/*Local Function*/
int is_even(int n)  // this function return if thenumber is even or not
{
    if((n % 2) == 0){   // number is even 
        return 1;
    }
    else{               // number is odd
        return 0;
    }
}