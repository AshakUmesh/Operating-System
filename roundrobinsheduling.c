#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int i,n,total=0,at[10],bt[10],temp[10],t,x,sum=0,sum1=0;
printf("enter number of process");
scanf("%d",&n);
x=n;
for(i=0;i<n;i++)
{
printf("enter arrival and burst time of process[%d]",i+1);
scanf("%d %d",at[i],bt[i]);
temp[i]=bt[i];
}
printf("enter time quantum");
scanf("%d",&t);
int counter;
printf("process id\t\tbursttime\t\tturnaroundtime\t\twaitingtime\n\n");
for(total=0,i=0;x!=0;)
{
if(temp[i]<t&&temp[i]!=0)
{
total=total+temp[i];
temp[i]=0;
counter=1;
}
else if(temp[i]>t)
{
total=total+t;
temp[i]=temp[i]-t;
}
if(temp[i]==0&&counter==1)
{
x--;
printf(" process [%d]\t\t %d \t\t%d\t\t%d",i+1,bt[i],total-at[i],total-at[i]-bt[i]);
sum=sum+total-at[i];
sum1=sum1+total-at[i]-bt[i];
counter=0;
}
if(i==n-1)
{
i=0;
}
else if(at[i+1]>total)
{
i++;
}
else
{
i=0;
}
}
int avgwt,avgtat;
avgwt=sum1/n;
avgtat=sum/n;
printf("average turn around time = %d",avgtat);
printf("average waiting time = %d",avgwt);

}
