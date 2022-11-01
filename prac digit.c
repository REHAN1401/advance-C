#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node*next;
};
struct node*list=NULL;
void insertf(int x);
void display();


int main()
{
	int x,r;
	printf("enter the number:");
	scanf("%d",&x);
	while(x>0)
	{
		r=x%10;
		insertf(r);
		x=x/10;
	}
	display();
}



void insertf(int x)
{
	struct node*p;
	p=(struct node*)malloc(sizeof(struct node));
	
	p->next=NULL;
	p->info=x;
	if(list==NULL)
	{
		list=p;
	}
	else
	{
		p->next=list;
		list=p;
	}
}

void display()
{
	struct node*p;
	p=list;
	while(p!=NULL)
	{
		printf("%d,",p->info);
		p=p->next;	
	}
}
