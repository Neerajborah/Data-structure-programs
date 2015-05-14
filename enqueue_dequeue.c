#include<stdio.h>
#include<stdlib.h>

 int Q[20];
 int top=-1,rear=-1;
enque(int x)
{

if(top==20)
{
printf("the overflow condition!!!\n");
return 0;
}
if(top==-1)
{
rear++;
}
++top;
Q[top]=x;
}
deQ()
{
if(rear==-1)
{
printf("underflow condition\n");
return 0;
}
printf("the popped element is %d \n",Q[rear]);
rear++;

}
disp()
{
do
{
printf("%d\n",Q[rear]);
rear++;
}while(rear!=top);

}

main()
{
int i,j;
start:
printf("enter\n 1.to enqueue\n 2.to dequeue\n 3.to display\n 4.to exit\n");
scanf("%d",&i);
switch(i)
{
case 1:
{
printf("enter the element:");
scanf("%d",&j);
enque(j);
break;
}
case 2:
{
deQ();
break;
}
case 3:
{
disp();
break;
}
case 4:
{
return 0;
}
}
goto start;


}
