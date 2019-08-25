#include <stdio.h>

int main()
{
    int v;

    int x = 3, y = 5;
    
    /* Logical OR, evaluates to true (1) if one of at least its operands is true */
    v = (x || y);

    printf("1: %d\n", v);

    v = (0 || 0);

    printf("2: %d\n", v);

    /* Logical AND, evaluates to true if all operands are true */
    v = (x == 3 && y < 10);

    printf("3: %d\n", v);

    /* the arguments to printf can be expressions, not just variables */

    printf("4: %d\n", (x != 4));

    return 0;
}