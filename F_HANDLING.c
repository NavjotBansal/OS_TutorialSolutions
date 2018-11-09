#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
int main()
{
int x = open("check.txt",O_CREAT | O_WRONLY,0777);
int res = close(x);
if(res==0)
printf("file closed");
else
printf("error");
return 0;
}
