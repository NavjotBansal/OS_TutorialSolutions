#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
int main()
{int i;
char buf[2]; //one for char and other for NULL;
int fd = open("text.txt",O_RDONLY,0777);
while((i=read(fd,buf,1))>0)
printf("%c",buf[0]);
close(fd);
return 0;
}

