#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
int n,i,at[10],bt[10],temp,wt[10],tat[10],ct[10],pr[10];
char p[10][10],temps[10];
int sum=0,sum1=0,avgwat,avgtat;
printf("enter number of process");
scanf("%d",&n);

printf("enter process number \n arrival time \n burst time \n priority \n");
for(i=0;i<n;i++)
{
scanf("%s %d %d",p[i],&at[i],&bt[i],&pr[i]);
}

for(i=0;i<n-1;i++)
{
  for(i=0;i<n-1;i++)
  {
    if(pr[i]>pr[i+1])
    {
      temp=pr[i];
      pr[i]=pr[i+1];
      pr[i+1]=temp;
      
      temp=bt[i];
      bt[i]=bt[i+1];
      bt[i+1]=temp;
      
      strcpy(temps,p[i]);
      strcpy(p[i],p[i+1]);
      strcpy(p[i+1],temps);
    }
  }
}   
wt[0]=0;
for(i=1;i<=n;i++)
{
wt[i]=wt[i-1]+bt[i-1];
printf("%d",wt[i]);
}

ct[0]=bt[0];
for(i=1;i<=n;i++)
{
ct[i]=ct[i-1]+bt[i];
}
 
printf("\t\tGANTT CHART\t\t\n");
printf("-------------------------------------------------------------------------------------");
printf("\n");
for(i=0;i<n;i++)
printf("|\t%s\t",p[i]);
printf("\t|");
printf("\n");
printf("--------------------------------------------------------------------------------------");
printf("\n");
for(i=0;i<=n;i++)
printf("%d\t\t",wt[i]);


for(i=0;i<n;i++){
tat[i]=ct[i]-at[i];
}
for(i=0;i<n;i++){
wt[i]=tat[i]-bt[i];
}
printf("\n\n\n\n");
printf("process id \t arrivaltime \t bursttime \t priority \t completiontime \t turnaroundtime \t waitingtime \t\n");
for(i=0;i<n;i++)
{
printf("%s\t\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d",p[i],at[i],bt[i],pr[i],ct[i],tat[i],wt[i]);
printf("\n\n");
}
for(i=0;i<n;i++)
{
sum=sum+tat[i];
}
avgtat=sum/n;
for(i=0;i<n;i++)
{
sum1=sum1+wt[i];
}
avgwat=sum/n;
printf("average waiting time %d",avgwat);
printf("average turnaround time %d",avgtat);
}
