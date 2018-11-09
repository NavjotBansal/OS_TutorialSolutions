#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
int file = open("text.txt",O_RDWR);
int file2 = dup(file);
if(file2==-1)
printf("-1");
char* x ="This file will be updated with the content in DUP.c";
write(file2,x,strlen(x));
return 0;
}
