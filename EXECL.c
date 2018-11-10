#include <stdio.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
int ret;
printf("calling exec \n");
ret = execl("/home/nb09/Desktop/Operating_System_Tutorials/Solution", "ls", "-l", NULL);
printf("Failed execl....... ret = %d\n", ret);
return 0;
}
