#include <stdio.h>
#include <string.h> /* for strcpy */

int main()
{
    char * str1 = "Hello, my name is ... what ?!";

    char str2[] = "My name is ... who?!";

    char str3[64];
    strcpy(str3, "My name is ... @#&$ ... Jeff Nicholls!");

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    return 0;
}