#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
int  file = open("text.txt",O_WRONLY,O_APPEND);
dup2(file,1);
printf("this is the content of the file text.txt");
return 0;
}

