#include<stdio.h>
#include<stdlib.h>

void insertAtFront( int x);
void display();
void count();
void deletef();
void deletee();
 
struct node{
 struct node*prev;
 int info;
 struct node*next;
};

struct node*list=NULL;
int main()
{
	int num,ch;
	while(1)
	{
	printf("1.insert\n");
	printf("2.display\n");
    printf("3.delete from front\n");
    printf("4.delete from end\n");
    printf("5.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("enter the number:");
		scanf("%d",&num);
		insertAtFront(num);
		break;
		
		case 2:printf("displaying----->");
		display();
		break;
		
		case 3:printf("deletetion from front----->");
		deletef();
		break;
		
		case 4:printf("deletion from end----->");
		deletee();
		break;
		
		case 5:exit(0);
    }
   }
}

void insertAtFront( int x)					//insert from front
{
 struct node*p;
 
 p=((struct node*) malloc (sizeof (struct node)));
 
 p->next=NULL;
 p->prev=NULL;
 p->info=x;
 
 if(list==NULL)
 {
  list=p;
 }
 else
 {
  p->next=list;
  list->prev=p;
  list=p;
 }
}

void display()							//display
{
 struct node*p;
 
 p=list;
 
 while(p!=NULL)
 {
  printf("%d",p->info);
 }
}

void deletef()						//delete from front
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
		list=p->next;
		list->prev=NULL;
		p->next=NULL;
		free(p);
	}
}

void deletee()						//delete from end
{
	struct node*p,*q;
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
		q=list;
		while(q->next->next!=NULL)
		{
			q=q->next;
		}
		free(q->next);
		q->next=NULL;
	}
}
