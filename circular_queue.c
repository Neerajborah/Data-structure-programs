#include<stdio.h>
#include<stdlib.h>
#define MAX 4

struct node
{
int data;
struct node *next;

};
struct node *front=NULL,*rear=NULL;

in(int y)
{

int count=1;
struct node *var,*temp;
var=(struct node*)malloc(sizeof(struct node));
var->data=y;
if(front==NULL)
{

front=var;

front->next=rear;

}
else
{
while(front->next!=rear)
{
front=front->next;


}

if(front->next==NULL)
{
rear=front;
}
front->next=var;
var->next=rear;
front=var;

}
}
out()
{
if(rear==NULL)
{
printf("the underflow condion!!!\n");
return 0;
}
if(rear==front)
{
printf("the popped element is %d\n",rear->data);
rear=NULL;
}
else
{
printf("the popped element is %d\n",rear->data);
rear=rear->next;
}
}
display()
{
struct node *temp;
temp=rear;
while(temp!=front)
{
printf("%d--->",temp->data);
temp=temp->next;
}
printf("%d\n",temp->data);
}
main()
{
int i,j;
int x=1;
start:
printf("enter\n 1.to enqueue\n 2.to dequeue\n 3.to display\n 4.to exit\n");
scanf("%d",&i);
switch(i)
{
case 1:
{
if(x<=4)
{
printf("enter the element:");
scanf("%d",&j);
in(j);
x++;
break;
}
else
{
printf("overflow \n");
break;
}
}
case 2:
{
out();
break;
}
case 3:
{
display();
break;
}
case 4:
{
return 0;
}
}
goto start;


}
