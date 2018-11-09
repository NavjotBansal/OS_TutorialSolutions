#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
DIR * od; struct dirent * rd;int cld;
long max = pathconf("/",_PC_PATH_MAX);
char * buf = (char*)malloc(max);
getcwd(buf,max);
od = opendir(buf);
while((rd=readdir(od))!=NULL)
printf("%s \n",rd->d_name);
if((cld=closedir(od))==0)
printf("done \n");
return 0;
}
