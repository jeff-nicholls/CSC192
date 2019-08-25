#include <stdio.h>

int main()
{
    double x, y, tolerance = 0.00000000001;

    printf("Please enter a decimal point number: ");
    scanf("%lf", &x);

    printf("Please enter another decimal point number: ");
    scanf("%lf", &y);

    /* Ok, now, let's see how to fix our float equality issue from boolex1 */

    // Find the absolute difference between these two numbers
    double abs_difference = (x-y);
    if (abs_difference < 0)
        abs_difference *= (-1);

    if ( abs_difference < tolerance )
    {
        /* The "then" condition can be a block of statements. */
        printf("You have entered two numbers that are pretty much equal.\n");
        printf("Why don't you try again, but this time enter something different?\n");
    }
    else
    {
        /* The "else" condition can be a single statement or
         * a block of statements, too. */
        printf("You have entered two different numbers.\n");
        printf("Why don't you try again, but this time enter something equal?\n");
    }

    return 0;
}