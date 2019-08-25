#include <stdio.h>

int main()
{
    printf("Welcome to the wonderful world of accepting input!\n");
    printf("Please enter your first name only (no spaces, please!): ");

    char name[64];
    scanf("%s", name);

    printf("Thanks, %s! Pleased to meet you. \n\n", name);

    printf("Now.. let's get down to business.\n");
    printf("Please enter your age (eg. 34): ");

    int age;
    scanf("%d", &age);

    printf("Great! I'm much younger than you. :-p\n\n");

    printf("Now, how about your height, in meters (eg. 1.72): ");

    double height;
    scanf("%lf", &height);

    printf("\nOk. Here is your profile.\n");
    printf("------------------\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %lf\n", height);

    return 0;
}