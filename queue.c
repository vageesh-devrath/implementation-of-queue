#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#define max 100
int queue[max];
int front=-1,rear=-1;
 
void enqueue()
{
	int x;
	if((front==0 && rear==max-1)||front==rear+1)
	{
		printf("QUEUE IS FULL");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		printf("ENTER A NUMBER TO BE INSERTED IN QUEUE");
		scanf("%d",&x);
		rear=(rear+1)%max;
		queue[rear]=x;
	}
}
void dequeue()
{
	int y;
	if(front==-1 || front>rear)
	{
		printf("QUEUE ID EMPTY  ");
	}
	else
	{
		y=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=(front+1)%max;
		}
		printf("NUMBER DELETED IS  %d",y);
	}
	
}
void display()
{
	int i;
	if(front==-1 || front>rear)
	{
		printf("QUEUE IS EMPTY");
	}
	else
	{
		printf("THE QUEUE IS  \n");
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
		{
			printf("%d  \n",queue[i]);
		}
		}
		else if(rear<front)
		{
			for(i=rear;i<=max-1;i++)
			{
				printf("%d  \n",queue[i]);
			}
			for(i=0;i<=front;i++)
			{
				printf("%d  \n",queue[i]);
			}
			
		}
	}
}
int main()
{
	int a;
	while(1)
	{
	printf("WELCOME TO QUEUE PROGRAM  \n");
	printf("1.ENQUEUE  \n");
	printf("2.DEQUEUE  \n");
	printf("3.DISPLAY  \n");
	printf("4.EXIT  \n");
	printf("ENETR YOUR CHOICE \n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		enqueue();
		break;
	case 2:
		dequeue();
		break;
	case 3:
		display();
		break;
	case 4:
		exit(0);
		break;
	default:
		printf("entered wrong number  \n");
		break;
	}
	}
}

