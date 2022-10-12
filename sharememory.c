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
shmid=shmget((key_t) 1222,1024,0666);
printf("key = %d",shmid);
sharedmemory=shmat(shmid,NULL,0);
printf("%p",sharedmemory);
printf("%s",(char *)sharedmemory);
}
