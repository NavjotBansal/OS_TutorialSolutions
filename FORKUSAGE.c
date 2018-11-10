#include <stdio.h>
int main()
{
printf("before fork \n");
system("ps");
fork();
printf("after fork \n");
system("ps");
return 0;
}
