#include <stdio.h>

/**
 *********************IMPORTANT NOTES:*********************
 * - #if directive only works with #define directive, if we convert "#define FEATURE_1_SUPPORT   1" to a int type
 *   variable the #if directive will not work, as there is no #define directive is declared.
*/

#define FEATURE_1_SUPPORT   1
#define FEATURE_2_SUPPORT   1

#if FEATURE_1_SUPPORT == 1
void feature_1()
{
    printf("feature 1 is supported\n");
}
#endif

#if FEATURE_2_SUPPORT == 1
void feature_2()
{
    printf("feature 2 is supported\n");
}
#endif

int main(void)
{
#if FEATURE_1_SUPPORT == 1  
    feature_1();
#endif

#if FEATURE_2_SUPPORT == 1
    feature_2();
#endif
}