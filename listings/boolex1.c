#include <stdio.h>

int main()
{
    int v = 1 == 1;

    printf("1: %d\n", v);

    v = 1 != 1;

    printf("2: %d\n", v);

    v = (3*3.2) < (4*2.3);

    printf("3: %d\n", v);

    float f1 = 2.781;
    float f2 = 3.14156;

    v = (f2 >= f1);

    printf("4: %d\n", v);

    double f3 = 3.1415600000000000001;

    v = (f3 == f2);

    printf("5: %d\n", v);

    f3 = 3.14156;

    v = (f3 == f2);

    printf("6: %d\n", v);

    /*
     * Woah!? What happened with this last one?
     * 
     * Try to avoid using == when checking for equality of two floating point numbers.
     * 
     * More on why this is later on in the course, but for a quick fix to this problem see if2.c
     */

    return 0;
}