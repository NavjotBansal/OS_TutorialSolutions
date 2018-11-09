#include <unistd.h>
#include <stdio.h>

int main()
  {
  const char x[] = "Hello World!";
  write(STDOUT_FILENO, x, strlen(x)); // Feel free to check the return value.
  return 0;
  }
