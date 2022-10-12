#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<dirent.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/wait.h>
#include<sys/ipc.h>
#include<sys/shm.h>
int main(){
pid_t pid;
pid=fork();
if(pid<0)
{
printf("child process failed");
return 1;
}
else if(pid==0)
{
printf("child process created\n");
printf("child process id =%d \n parent process id =%d\n",getpid(),getppid());
execlp("bin/ls","ls",NULL);
}
else
{
wait(NULL);
printf("child process id =%d \n parent process id =%d",getpid(),getppid());
}
}
