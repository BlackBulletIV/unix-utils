#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int i = 0;
    int len = 0;

    if (argc == 1)
    {
        char str[256];
        while (fgets(str, 256, stdin))
        {
            int gets_len = strlen(str);
            len += gets_len;
            if (str[gets_len - 1] == '\n') len--; // get rid of new lines
        }
        
        if (!str)
        {
            puts("Error: You gave no arguments!");
            return EXIT_FAILURE;
        }
    }

    for (i = 1; i < argc; i++)
    {
        len += strlen(argv[i]);
        if (i > 1) len++; // for the space
    }

    printf("%i\n", len);
    return EXIT_SUCCESS;
}