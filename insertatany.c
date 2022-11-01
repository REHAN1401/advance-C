#include<stdio.h>
#include<conio.h>
//insert at back

struct node
{
	int info;
	struct node *next;
	
};

strcut node*list=NULL;

void insert (int pos,int x)
{
	struct node *p,*q;
	p=((struct node*)malloc(sizeof(struct node)));
	p->info=x;
	p->next=NULL;
	if(list ==NULL)
	{
		p=list;
	}
   else if(pos==1)
  {
	p->next=list;
	list =p;
	}
	
  else
  {
  	 for(i=1,q=list;i<pos-1,q->next!=NULL;i++,q=q->next)
  	 ;
	  }
	  p->next=q->next;
	  q->next=p;	
		
  }

 void deletef()
 {
 	struct node *p;
 	if(list ==NULL)
 	{
 		printf("delete no. of elements");
	 }
	 else if(list ->next==NULL)
	 {
	 	free(list);
	 	list=NULL;
	 }
	 else
	 {
	 	for(p=list;p->next=NULL;p=p->NULL)
	 	;
	 	free(p->next);
	 	p->next=NULL;
	 }
 }
