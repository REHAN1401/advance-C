#include<stdio.h>
#include<stdlib.h>

#define max 10

int front=-1;
int rear=-1;

int stack[max];
void enqueue()
{
	if(front==-1 && rear ==-1)
	{
		front++;
		rear++;
		stack[rear];
	}
	else if((rear+1)%max == front)
	{
		printf("No space for insertion\n");
	}
	else
	{
		rear=(rear+1)%max;
		stack[rear];
	}
}

void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("queue is full\n");
	}
	else if(front==rear)
	{
		rear=front=-1;
	}
	else
	{
		front=(front+1)%max;
	}
}

void display()
{
	while((front+1)%max!=rear)
	{
		printf("%d",stack[front]);
		front=front+1%max;
	}
}

int main()
{
	enqueue(1);
	enqueue(2);
	display();
}
