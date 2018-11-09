#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
int buff[10];
int fd = open("text.txt",O_RDONLY);
int res = read(fd,buff,10);
printf("read \t %s \n",buff);
printf("size \t %d \n",res);
close(fd);
return 0;
}
