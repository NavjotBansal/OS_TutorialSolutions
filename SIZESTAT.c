#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<time.h>
#include<string.h>

int main()
{
int x;
struct stat sol;
if((x=stat("text.txt",&sol))==0)
{
printf("the size is %lld Bytes",sol.st_size);
}
else
{
printf("Error");
}
return 0;
}
