#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
int file;
file = open("text.txt",O_RDONLY);
if(file==-1)
return -1;
char buffer[19];
if(read(file,buffer,19)!=19)return -1;
printf("%s \n",buffer);
//if(lseek(file,10,SEEK_SET)<0)return -1;
if(lseek(file,10,SEEK_CUR)<0)return -1;
if(read(file,buffer,19)!=19)return -1;
printf("%s \n",buffer);
return 0;
}
