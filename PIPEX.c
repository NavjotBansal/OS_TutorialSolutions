#include<stdio.h>
#include<unistd.h>
int main()
{
char* msg1 = "hello, world #1";
char* msg2 = "hello, world #2";
char* msg3 = "hello, world #3";
char inbuf[16];
int p[2],i;
if(pipe(p)<0)
exit(1);
write(p[1],msg1,16);
write(p[1],msg2,16);
write(p[1],msg3,16);
for(int i=0;i<3;i++)
{
 read(p[0],inbuf,16);
 printf("%s \n",inbuf);
}
return 0;
}

