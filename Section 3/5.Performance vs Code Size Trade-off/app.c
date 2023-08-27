#include <stdio.h>

/**
 * IMPORTANT NOTES:
 * 
 * - Macro like functions ocupy more memory than the functions itself.
*/


#define APPLE   1
#define ORANGE  2
#define GRAPES  3

int apple_count = 0;
int orange_count = 0;   
int grapes_count = 0;  

#define FRUIT_COUNT(f)  if(f == APPLE){         \
                            apple_count++;      \
                        }                       \
                        else if(f == ORANGE){   \
                            orange_count++;     \
                        }                       \
                        else if(f == GRAPES){   \
                            grapes_count++;     \
                        }

void fruit_count(int f){
    if(f == APPLE){
        apple_count++;
    }
    else if(f == ORANGE){
        orange_count++;
    }
    else if(f == GRAPES){
        grapes_count++;
    }
}

int main(void)
{
    fruit_count(APPLE);
    fruit_count(ORANGE);
    fruit_count(APPLE);
    fruit_count(APPLE);
    fruit_count(GRAPES);
    fruit_count(APPLE);
    fruit_count(APPLE);
    fruit_count(GRAPES);
    fruit_count(APPLE);
    fruit_count(ORANGE);
    fruit_count(GRAPES);

    printf("Apple: %d\nOrange: %d\nGrapes: %d\n", apple_count, orange_count, grapes_count);
    return 0;
}