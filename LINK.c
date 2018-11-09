#include <unistd.h>
#include <stdio.h>

int main()
{
char * x = "lol!";
int suc = link("text.txt","notext.txt");
if(!suc)
write(STDOUT_FILENO,x,strlen(x));
else
write(STDOUT_FILENO,"PHODA",5);
return 0;
}
