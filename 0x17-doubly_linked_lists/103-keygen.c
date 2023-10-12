#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  *main - Generate and print passwords for the executable crackme
  *
  * @argc: args supplied to program
  * @argv: array of pointers to args
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
    char pswd[7], *code;
    int length = strlen(argv[1]), temp, i;
    (void)argc;

    code = "A-CHRDw871NS0E9B2TibgnpMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

    /* 1st char */
    temp = (length ^ 59) & 63;
    pswd[0] = code[temp];

    /* 2nd char */
    temp = 0;
    for (i = 0; i < length; i++)
        temp += argv[1][i];
    pswd[1] = code[(temp ^ 79) & 63];

    /* 3rd char */
    temp = 1;
    for (i = 0; i < length; i++)
        temp *= argv[1][i];
    pswd[2] = code[(temp ^ 85) & 63];

    /* 4th char */
    temp = 0;
    for (i = 0; i < length; i++)
    {
        if (argv[1][i] > temp)
            temp = argv[1][i];
    }
    srand(temp ^ 14);
    pswd[3] = code[rand() & 63];

    /* 5th char */
    temp = 0;
    for (i = 0; i < length; i++)
        temp += (argv[1][i] * argv[1][i]);
    pswd[4] = code[(temp ^ 239) & 63];

    /* 6th char */
    for (i = 0; i < length; i++)
        temp = rand();
    pswd[5] = code[(temp ^ 229) & 63];

    pswd[6] = '\0';

    printf("%s", pswd);
    return (0);
}
