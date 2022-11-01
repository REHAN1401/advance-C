#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node*next;
};

struct node*list,*list1 = NULL;

int num;

void insert(int x)
{
	struct node*p,*q;
	
	p = (struct node*)malloc (sizeof(struct node));
	
	p->info=x;
	p->next=NULL;
	
	if(list == NULL)
	{
		list=p;
	}
	else
	{
		q=list;
		
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
}

void reverse(int x)
{
	struct node*p;
	
	p=(struct node*)malloc(sizeof(struct node));
	p->next=NULL;
	p->info=x;
	
	if(list1==NULL)
	{
		list1=p;
	}	
	else
	{
		p->next=list1;
		list1=p;
	}
}

void display()
{
	struct node*p,*q,*temp;
	
	p=list;
	
	while(p!=NULL)
	{
		printf("%d->",p->info);
		p=p->next;
	}
	printf("\n");
	
	printf("-------Element  reverse------\n");
	
	q=list1;
	
	while(q!=NULL)
	{
		printf("%d-->",q->info);
		q=q->next;
	}
	
}


int main()
{
	int i,m;
	
	printf("Enter how many elements you want to enter:\n");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		scanf("%d",&m);
		insert(m);
		reverse(m);
	}
	
	display();
}
