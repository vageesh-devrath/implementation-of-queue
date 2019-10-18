#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
int items[SIZE],rear=-1,front=-1;
void enqueue(int value)
{
    if(rear == SIZE-1)
        printf("\nQueue is Full!!");
    else {
        if(front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("\nThe Inserted Value Is -> %d", value);
    }
}
void dequeue()
{
	if(front == -1)
        printf("\nQueue is Empty!!");
    else
	{
        printf("\nThe Deleted Value Is : %d", items[front]);
        front++;
        if(front > rear)
        front = rear = -1;
    }
}
void display()
{
	if(rear == -1)
        printf("\nQueue is Empty!!!");
    else
	{
        int i;
        printf("\nQueue elements are:\n");
        for(i=front; i<=rear; i++)
        printf("%d\t",items[i]);
    }
}
