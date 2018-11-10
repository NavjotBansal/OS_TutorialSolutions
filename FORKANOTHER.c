#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t pid;
pid = fork();
if(pid==0)
{
printf("child has been forked \n");
}
else 
{
 wait(NULL); // wait for child to over
 printf("Child is over \n");
}
return 0;
}
