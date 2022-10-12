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
void * sharedmemory;
int shmid;
char buff[50];
printf("enter the text\n");
scanf("%s",buff);
shmid=shmget((key_t) 1222,1024,0666|IPC_CREAT);
printf("key = %d",shmid);
sharedmemory=shmat(shmid,NULL,0);
read(0,buff,50);
strcpy(sharedmemory,buff);
printf("%p\n",sharedmemory);
printf("%s\n",(char *)sharedmemory);
}
