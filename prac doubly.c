  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
 int info;
 struct node*next;
 struct node*prev;
};
struct node*list=NULL;

void insertb(int x);
void display();
void insertf();
void deletef();
void deleteb();


int main()
{
 int num,ch;
 while(1)
 {
 printf("\n1.insert at back\n");
 printf("2.display\n");
 printf("3.insert at front\n");
 printf("4.delete from front\n");
 printf("5.delete from back\n");
 printf("6.exit\n");
 
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:printf("enter elements=\n");
    scanf("%d",&num);
    insertb(num);
    break;
    
  case 2:display();
    break;
    
  case 3:printf("enter elemets=");
    scanf("%d",&num);
    insertf(num);
    break;  
    
  case 4:deletef();
  		 break;  
  		 
  case 5:deleteb();
  		break;		 
  		
  
  case 6: exit(0);		  	

 }
    }
}

void display()
{
   struct node*p;
   p=list;
   while(p!=NULL)
   {
 	printf(",%d",p->info);
    p=p->next;
   }
     
}

void insertb(int x)
{
 struct node*p;
 struct node*q;
    p=(struct node*)malloc(sizeof(struct node));
    p->next=NULL;
    p->prev=NULL;
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
  p->prev=q;
 }
}

void insertf(int x)
{
	struct node*p;
	p=(struct node*)malloc(sizeof(struct node));
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
		list=p->next;
		list->prev=NULL;
		p->next=NULL;
		free(p);
	}
}

void deleteb()
{
	struct node*p;
	struct node*q;
	if(list==NULL)
	{
		printf("list is empty");
	}
	else if(list->next==NULL)
	{
		p=list;
		list=NULL;
		free(p);
	}
	else
	{
		p=list;
		while(p->next->next!=NULL)
		{
			p=p->next;
		}
		q=p->next->next;
		p->next=NULL;
		free(q);
	}
}




