#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
int n,m,flag;
int i,j;
int alloc[10][10],max[10][10],avail[10],need[10][10],f[10];
printf("enter number of process\n");
scanf("%d",&n);
printf("enter number of resources\n");
scanf("%d",&m);
printf("enter the allocated resources\n");
for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
    scanf("%d",&alloc[i][j]);
  }
}
printf("enter the max resources");
for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
    scanf("%d",&max[i][j]);
  }
}
printf("enter the available resources");
for(i=0;i<m;i++){
scanf("%d",&avail[m]);
}

for(i=0;i<n;i++){
f[i]=0;
}


for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
    need[i][j]=max[i][j]-alloc[i][j];
    printf("%d\t",need[i][j]);
  }
  printf("\n");
}
int ans[10],ind=0;
int k=0;


for(k=0;k<n;k++)
{
for(i=0;i<n;i++)
{
 if(f[i]==0)
 {
 flag=0;
 for(j=0;j<m;j++)
 {
 if(need[i][j]>avail[j])
 {flag=1;
 break;
 }
}
 if(flag==0)
 {
 ans[ind++]=i;
 
 for(int y=0;y<m;y++)
 avail[y]=avail[y]+alloc[i][y];
 f[i]=1;
 printf("%d\t\n",f[i]);
 }}}}
 for(i=0;i<n;i++)
 printf("%d\t",f[i]);
 
 flag=0;
 for(i=0;i<n;i++)
 {
 if(f[i]==0)
 {
 printf("not in a safe state");
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 for(i=0;i<n-1;i++)
 printf("safe state p%d->",ans[i]);
 printf("p%d",ans[n-1]);
 }
 }
 
 
 
























