#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void producer();
int wait(int);
int signal(int);
void consumer();
int mutex=1,full=0,empty=5,a[5],x;
int main()
{
int ch;
do
{
printf("1)producer \t 2)consumer \t 3)exit");
printf("\nenter your choise");
scanf("%d",&ch);
switch(ch)
{
case 1:if(mutex==1 && full!=5)
        producer();
        else
        printf("\ncannot produce item");
        break;
case 2:if(mutex==1 && empty!=5)
        consumer();
        else
        printf("\ncannot consume item");
        break;            
case 3:printf("\nthankyou");
        break;
default:printf("\ninvalid choise");
        break;
}
}
while(ch!=3);
}
int wait(int s)
{
while(s<=0);
return --s;
}
int signal(int s)
{
return ++s;
}

void producer()
{
mutex=wait(mutex);
empty=wait(empty);
full=signal(full);
x++;
printf("\nenter the item");
scanf("%d",&a[x]);
printf("\nproduced item %d. %d\n",x,a[x]);
mutex=signal(mutex);
}
void consumer()
{
mutex=wait(mutex);
full=wait(full);
empty=wait(empty);
printf("\nconsumed %d.%d",x,a[x]);
x--;
mutex=signal(mutex);
}


