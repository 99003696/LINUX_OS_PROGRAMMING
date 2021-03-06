#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(int argc, char *argv[])
{
    pid_t ret;
    int status,i;

    ret = fork();
    if(ret>0)
    {
        
		for (int i=0;i<5;i++)
		{
			sleep(1);
        ret = waitpid(-1,&status,0);
        printf("\n This is a %d^th shell\n",i);
		}
    }
    else
    {
        
		for (int i=0;i<5;i++)
		{
		sleep(1);	
        execlp(argv[1],argv[1],argv[2],argv[3],argv[4],argv[5],NULL);
		}
        

    }
}