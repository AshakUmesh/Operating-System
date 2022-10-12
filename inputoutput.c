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
int n,fd;
char buff[50];
printf("enter the text");
scanf("%s",buff);
n=read(0,buff,50);
fd=("file",O_CREAT|O_RDWR,0777);
write(fd,buff,n);
write('.',buff,n);
 int close(int fd);
return 0;
}
