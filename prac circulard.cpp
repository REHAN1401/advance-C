#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	struct node*next;
	struct node*prev;
	int info;   
};
struct node*list=NULL;
void insert(int x);
void display();
int main()
{
	int ch,n;
	while(1)
	{
		printf("1.insert\n");
		printf("2.display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the elements=");
					scanf("%d",&n);
					insert(n);
					break;
			case 2:display();
					break;		
		}
	}
}

void insert(int x)
{
	struct node*p,*q;
	p=(struct node*)malloc(sizeof(struct node));
	p->next=NULL;
	p->prev=NULL;
	p->info=x;
	if(list==NULL)
	{
		list=p;
		list->next=list;
		list->prev=list;
		
	}
	else
	{
		q=list;
		while(q->next!=list)
		{
			q=q->next;
		}
		p->next=list;
		list->prev=p;
		list=p;
		q->next=list;
		list->prev=q;

		
	}
}

void display()
{
	struct node*p;
	p=list;
	while(p->next!=list)
	{
		printf("[%d]\n",p->info);
		p=p->next;
	}
	if(p->next==list)
	{
		printf("[%d]\n",p->info);
	}
}

