#include <stdio.h>
#include <unistd.h>

int main()
{
int max = pathconf("/",_PC_PATH_MAX);
char * buff = (char*)malloc(max);
getcwd(buff,max);
printf("%s \n",buff);
return 0;
}
