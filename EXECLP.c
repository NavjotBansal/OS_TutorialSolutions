#include <stdio.h>
#include <unistd.h>
#include <errno.h>
int main()
{
int res = execlp("echo","echo","hello","world",(char*)NULL);
printf("%s \n",strerror(errno));
return 0;
}
