# include<stdio.h>
main()
{
int t1=0, t2=0, t3=0;
t1=fork();
t2=fork();
printf("\n%d\t",t1);
printf("%d\n",t2);
if(t1!=0)
{
t3=fork();
printf("True : %d\n",t3);
}
else
printf("False\n");
}
