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
struct dirent * dptr;
char buff[50];
DIR * dirp;
printf("enter the direnctory name");
scanf("%s",buff);
if((dirp=opendir(buff))==NULL)
{
printf("empty");
return 0;
}
while(dptr=readdir(dirp))
{
printf("%s",dptr->d_name);
closedir(dirp);
}
}
