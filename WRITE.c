#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
int fd = open("text.txt",O_RDWR);
char x[17] = "KUCH TO LIKHA HAI";
int res = write(fd,x,17);
printf("size \t \n %d",res);
return 0;
}
