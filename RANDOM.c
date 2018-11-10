#include <stdio.h>
#include <unistd.h>
int main(int argc,char *argv[])
{
 int ret; 
 printf("calling execl...\n");
 ret = execl("hello","one","two","three",(char*)NULL);
 printf("failed %d \n",ret);
 return 0;
}
