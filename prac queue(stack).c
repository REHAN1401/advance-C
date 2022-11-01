#include<stdio.h>
int insert(int x);
int deletee();
int front=-1;
int rear=-1;
int display();
int a[10];
int main()
{
	int ch,n;
	while(1)
	{
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("4.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter number:=");
			scanf("%d",&n);
			insert(n);
			break;
			
			case 2:printf("delteion");
			deletee();
			break;
			
			case 3:display();
			break;
			
			case 4:exit(0);a
		}
	}
}

int insert(int x)
{
	if(rear==9)
	{
		printf("stack is full");
	}
	else if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		a[rear]=x;
	}
	else
	{
		rear++;
		a[rear]=x;
	}
}

int deletee()
{
	if(front==-1)
	{
		printf("no number to display");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front++;
	}
}

int display()
{
	int i;
	if(front==-1)
	{
		printf("no value to display");
	}
	for(i=front;i<=rear;i++)
	{
		printf("%d",a[i]);
	}
}

