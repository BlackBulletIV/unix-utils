#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
  int i = 0;
  size_t len = 0;
  int gets_len = 0;
  char str[256];

  if (argc == 1)
  {
    while (fgets(str, 256, stdin))
    {
      gets_len = strlen(str);
      len += gets_len;
      if (str[gets_len - 1] == '\n') len--; // get rid of new lines
    }

    if (!str)
    {
      puts("Error: You gave no arguments!");
      return EXIT_FAILURE;
    }
  }
  else
  {
    for (i = 1; i < argc; i++)
    {
      len += strlen(argv[i]);
      if (i > 1) len++; // for the space
    }
  }

  printf("%i\n", (int) len);
  return EXIT_SUCCESS;
}