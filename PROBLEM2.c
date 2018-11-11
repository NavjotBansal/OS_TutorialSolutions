#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
int fd = fork();
if(fd==0)
{
 execl("/home/nb09/Desktop/Operating_System_Tutorials/Solution","mkdir","newdir",(char*)NULL);
}
else
{
wait(NULL);
}
int o = open("newdir/content.txt",O_CREAT|O_RDWR,0777);
write(o,"OS CONTENT",10);
close(o);
return 0;
}
