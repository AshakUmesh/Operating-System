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
int head,prehead;
int total=0;
printf("enter head node\n");
scanf("%d",&head);
printf("enter previos head node\n");
scanf("%d",&prehead);
int size;
printf("enter cylinder size");
scanf("%d",&size);
rq[n+1]=head;
int headpos;
for(int i=0;i<=n;i++)
{for(int j=0;j<=n;j++)
{
if(rq[j]>rq[j+1])
{
int temp=rq[j];
rq[j]=rq[j+1];
rq[j+1]=temp;
}}}
for(int i=0;i<=n;i++)
{
rq[i]==head;
headpos=i;
break;
}
total=0;
if(prehead<head)
{
for(int i=headpos;i<=n+1;i++)
{
printf("%d->",rq[i]);
printf("%d->",size-1);
for(i=headpos-1;i>1;i--)
printf("%d->",rq[i]);
total=((size-1)-head)+((size-1)-rq[i]);
}}
else
{
for(int i=headpos-1;i>1;i--)
{
printf("%d->",rq[i]);
printf("0->");
for(i=headpos;i<=n+1;i++)
printf("%d->",rq[i]);
total=head+rq[n+1];
}}
printf("total=%d",total);
}
