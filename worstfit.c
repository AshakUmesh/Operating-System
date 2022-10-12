#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
printf("enter number of blocks");
int b;
scanf("%d",&b);
printf("enter block size");
int bl[10];
for(int i=0;i<b;i++)
scanf("%d",&bl[i]);

printf("enter number of process");
int p;
scanf("%d",&p);
printf("enter process size");
int pl[10];
for(int i=0;i<p;i++)
scanf("%d",&pl[i]);
int flag=0;

int j,largest=0;
for(int i=0;i<p;i++)
{
for(int j=0;j<b;j++)
{
if(bl[largest]<bl[j])
largest=j;
}
if(bl[largest]>=pl[i]){
printf("process %d allocated to block[%d]\n",pl[i],bl[j]);
bl[largest]=bl[largest]-pl[i];
flag++;
}
else
{
printf("process cannot be allocated\n");
return 0;
}}

}



