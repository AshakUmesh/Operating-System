#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
int n;
printf("enter number of entry");
scanf("%d",&n);
int rq[10];
printf("enter the nodes");
for(int i=0;i<n;i++)
scanf("%d",&rq[i]);
int head;
int total=0;
printf("enter head node");
scanf("%d",&head);
printf("%d",head);
for(int i=0;i<n;i++)
{
printf("->%d",rq[i]);
total=total+abs(rq[i]-head);
head=rq[i];
}
printf("total distance %d",total);
}





















