#include <stdio.h>
#include <unistd.h>

void main()
{
if (!fork()) {
if (!fork()) {
fork();
}
}
printf("0");
}
