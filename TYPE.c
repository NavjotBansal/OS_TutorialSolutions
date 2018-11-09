#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<time.h>
#include<string.h>

int main()
{
struct stat buf;
stat("text.txt",&buf);
if(S_ISREG(buf.st_mode))
{
printf("This is a reg file");
}
else
{
printf("not regular");
}
return 0;
}
