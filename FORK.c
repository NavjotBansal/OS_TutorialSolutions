#include <stdio.h>
#include <unistd.h>

int main()
{
fork();
printf("fork 3 \n");
fork();
printf("fork 2 \n");
fork();
printf("fork 1 \n");
printf("Hello \n");
return 0;
};

