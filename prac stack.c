#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node*next;
};
struct node*list=NULL;
void insertf(int x);
void display();
void count();
void deletef();
void deletee();
void inserte(int x);
void search(int d);

int main()
{
	int num,ch,d;
	while(1)
	{
		printf("\n1.insert at front\n");
		printf("2.display\n");
		printf("3.count\n");
		printf("4.delete from front\n");
		printf("5.delete from end\n");
		printf("6.exit\n");
		printf("7.insert at end\n");
		printf("8.search\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter elements=");
					scanf("%d",&num);
					insertf(num);
					break;
					
			case 2: display();
					break;
					
			case 3: count();
					break;		
					
			case 4: deletef();
					break;		
					
			case 5: deletee();
					break;	
					
			case 6:exit(0);	
			
			case 7: printf("enter elements=");
					scanf("%d",&num);
					inserte(num);
					break;
					
			case 8:printf("enter the elementb to be searched=");
					scanf("%d",&d);
					search(d);
					break;		
		}
	}
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


void inserte(int x)
{
	struct node*p,*q;
	p=(struct node*)malloc(sizeof(struct node));
	
	p->next=NULL;
	p->info=x;
	if(list==NULL)
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

 
void display()
{
	struct node*p;
	p=list;
	while(p!=NULL)
	{
		printf("%d",p->info);
		p=p->next;	
	}
}

void count()
{
	int cnt=0;
	struct node*p;
	p=list;
	while(p!=NULL)
	{
		printf("[%d]",p->info);
		cnt++;
		p=p->next;
	}
		printf("count=%d",cnt);
		
}

void deletef()
{
	struct node*p;
	if(list==NULL)
	{
		printf("list is empty");
	}
	else if(list->next==NULL)
	{
		free(list);
	}
	else
	{
		p=list;
		list=list->next;
		free(p);
	}
}

void deletee()
{
	struct node*p;
	if(list==NULL)
	{
		printf("list is empty");
	}
	else if(list==NULL)
	{
		free(list);	
	}
	else
	{
		for(p=list;p->next->next=NULL;p=p->next)
		;
		free(p->next);
		
	}
}

void search(int d)
{
	struct node*p;
	
	for(p=list;p!=NULL;p=p->next)
   {		
	
		if(p->info==d)
		printf("element is present..!");
	    break;

	
  }
}

  


