/*

char x = 50; // Compiler allocates x @0x100200
x = 12; // Compiler translates to *(0x100200) = 12

// Mapping x to 0x100200 is done by compiler, but NOT kept in the memory

char arr[3]; // Compiler allocates arr @0x100300
arr[0] = 1; // Compiler translates to *(0x100300) = 1
arr[1] = 2; // Compiler translates to *(0x100301) = 2
arr[2] = 3; // Compiler translates to *(0x100302) = 3

// Mapping arr to 0x100300 is done by compiler, but NOT kept in the memory

char arr[4] = {1, 2, 3, 4};
*arr = 0; // --> arr[0] = 0;
*(arr + 1) = 5; // --> arr[1] = 5;

//*(X + Y) = X[Y] = Y[X]

char* arrptr = arr; // (eq: char* arrptr = &arr[0]) 

arrptr[2] = *(arrptr + 2) = arr[2] = *(arr + 2);


Arrays VS Pointers

Arrays:

char arr[10];
- Allocates 10 character variables
- sizeof(arr) = 10 * sizeof(char) = 10
- arr is const pointer, so arr++ is INVALID
- arr itself doesn't occupy memory. It is resolved by the compiler the sae way is resolves
  regular variable names
- arr is pointing to the same array all the time

Pointers:
char *carr;
- Allocates 4-byte pointer variable
- sizeof(carr) = 4
- carr is regular pointer, so carr++ is VALID.
- carr can point anywhere in the memory
- To be treated like an array, it must point to already existing array. It is not an array
  itself

*/
