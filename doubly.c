#include<stdio.h>
#include<conio.h>
struct node{
	int info;
	struct node*next;
	struct node*prev;
};
struct node*list=NULL;

void insertf(int x);

int main()
{
	int ch;
	int num;
	
	while(1)
	{
		 printf("1.insert\n");
		 printf("2.exit\n");
		 printf()
		 switch(ch)
		 {
		 	case 1:printf("insert the number:");
		 	scanf("%d",&num);
			 insertf(num);
			 break;
			 
			 case 2:
			 	exit(0);
		 }
		 
	}
}
void insertf(int x)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->next=NULL;
	p->prev=NULL;
	p->info=x;
	
	if(list==NULL)
	{
		p=list;
	}
	else
	p->next=list;
	list=prev=p;
	list=p;
	
}

