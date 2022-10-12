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
int temp;
for(int i=0;i<b-1;i++){
for(int j=0;j<b-1;j++){
if(bl[j]>bl[j+1])
{
temp=bl[j];
bl[j]=bl[j+1];
bl[j+1]=temp;
}}}

for(int i=0;i<p;i++)
{
for(int j=0;j<b;j++)
{
if(bl[j]>=pl[i]){
printf("process allocated to block[%d]\n",bl[j]);
bl[i]=bl[j]-pl[i];
flag++;
break;
}
}
if(flag==0)
{
printf("process cannot be allocated\n");
return 0;
}}}





