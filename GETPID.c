#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
printf("pid is %ld \n",(long)getpid());
printf("pid 2 is %ld \n",(long)getpid());
printf("ppid is %ld \n",(long)getppid());
return 0;
}
