#include<stdio.h>
#include<conio.h>
struct node{
	int info;
	struct node*next;
};
struct node*list=NULL;
void inter(int x);
void display();
void count();
void deletef();
int main()
{
	int num,ch;
	while(1)
	{
	printf("1.insert\n");
	scanf("%d",&ch);
	switch(ch)
	 {
		case 1:printf("enter a number:");
		 	   scanf("%d",&num);
		 	   inter(num);
		 	   break;
	    case 2:printf("displaing the elements:");
	    		display();
	    		break;
	    	
	    case 3:printf("counting the element:");
	    		count();
	    		break;
	    		
	    case 4:printf("delete from front:");
	    		deletef();
	    		break;
	    		
	    		
	 } 
    }
}

void inter(int x)
{
	struct node*p;
	p=(struct node*)malloc(sizeof(struct node));
	p->next=NULL;
	p->info=x;
	
	if(list==NULL)
	{
		list =p;
		
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
		printf("%d\t",p->info);
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
		cnt++;
		p=p->next;
	}
	printf("count=%d\n",cnt);
	 
	
}

void deletef()
{
	struct node*p;
	if(list==NULL)
	{
		printf("list is empty");
	}
	else if(list->next=NULL)
	{
		free(list);
		list=NULL;
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
	else if(list->next=NULL)
	{
		free(list);
		list=NULL;
	}
	else
	for(p=list;p->next->next=NULL;p=p->next)
	{
	;
	free(p->next);
	p->next=NULL;
    }
}

