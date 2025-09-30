int x = 50;

//Let's say this value is located in the memory at position 0x100200.

//It's the same as:

int* xptr = 0x100200;

//"int*" it's a type, that is pointer to integer.
//"xptr" it's the pointer name.
//"0x100200" it's initial value to this pointer.

//It happens the same with this pointer to integer it is located somewhere in the memory for example "0x100300".
//The special thing in pointers is that they hold the addresses of the variables.

//In this case, the variable xptr is pointer to the "x" variable address (holding it's memory address).

//When we use the following expression:

int* xptr = &x;

//That means that we are saving the "location" of where the variable "x" is located (the memory address).
//Hence the value of the int* xptr will be 0x100200.

//We can change the values of the pointer, directly asigning them a value as we usually do with a normal variable:

int* xptr = 0x100200;

//We can also change the value of the variable that a pointer is pointing to as follows:

*xptr = 20;

//So this way we will be changing the value of the x variable, so in the memory the value of the x variable will be 20.

//We should have a lot of care when we define a new pointer, so that can mean that the pointer is pointing some random
//place at the memory, so when we change the value of where the pointer is pointer we can crupt the memory:

int* ptr;
*ptr = 20;

//like this way somewhere the value is changed to 20 but we dont know where.



