/*

*********************Pointer Types*********************

normal variables types:
sizeof(char)        --> 1 byte
sizeof(short int)   --> 2 bytes
sizeof(int)         --> 4 bytes
sizeof(void)        --> ??

pointer types:
sizeof(char*)        --> 4 byte
sizeof(short int*)   --> 4 bytes
sizeof(int*)         --> 4 bytes
sizeof(void*)        --> 4 bytes
// 8 bytes on LINUX 64-bits machines

char*       cptr = 0x1000;      cptr++;     // will be pointer to the next character -> 1001 then 1002, etc.
short int*  siptr = 0x2000;     siptr++;    // will be pointing to the next short int -> 2002 then 2004, etc.
int*        iptr = 0x3000;      iptr++;     // will be pointing to the next int -> 3004 then 3008, etc.
void*       vptr = 0x4000;      vptr++;     // its a non type pointer, so the compiler doesn't know how many bytes
                                            // there are... because the pointer is a non-type varible pointer


*********************Pointer Casting*********************

int value = 36987; // HEX representation: 0x0000907B
int* iptr = &value;
char* cptr = (char*)&value;


*********************Pointer Operators*********************

Add/Substract offset (ptr + n, ptr - n)
Increment/Decrement (ptr++, ++ptr, ptr--, --ptr)
Bitwise operations (ptr & MASK, ptr | MASK, !ptr)
Equal/Greater/Less than operators (ptr1 == ptr2, ptr1 > ptr2, ptr1 < ptr2)
Multiplication/Division DON'T make any sense with pointers

*/