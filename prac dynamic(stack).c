#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*next;
};
struct node*top=NULL;
void push(int x);
void pop();
void display();
int main()
{
	int n,ch;
	while(1)
	{
		printf("1.push\n");
			printf("2.pop\n");
				printf("3.display\n");
				   printf("4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("number=");
			scanf("%d",&n);
			push(n);
			break;
			
			case 2:pop();
			break;
			
			case 3:display();
			break;
			
			case 4:exit(0);
		}
		
	}
}

void push(int x)
{
	struct node*p;
	p=(struct node*)malloc(sizeof(struct node));
	p->next=NULL;
	p->info=x;
	
	if(top==NULL)
	{
		top=p;
	}
	else
	{
		p->next=top;
		top=p;
	}
}

void pop()
{
	struct node*p;
	if(top==NULL)
	{
		printf("list is empty");
	}
	else if(top->next=NULL)
	{
		free(top);
	}
	else
	{
		p=top;
		top=top->next;
		free(p);
	}
}

void display()
{
	struct node*p;
	p=top;
	while(p!=NULL)
	{
		printf("[%d]\n",p->info);
		p=p->next;
	}
}
