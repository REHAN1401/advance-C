#include<stdio.h>
#include<stdlib.h>
void insert( int x);
void display();
struct node{
	int* info;
	struct node*prev;
	struct node*next;
};
struct node*list;
int main()
{
	int num,ch;
	while(1)
	{
	printf("enter your choice\n");
	printf("1.insert at front\n");
	printf("2.display\n");
	scanf("%d",&ch);
	switch(ch)
	{
	 case 1:printf("enter the number:");
			scanf("%d",&num);
			insert(num);
			break;
			
    case 2:
			display();
			break;			
    }
    }
}
void insert(int x)
{
	 struct node *p,*q;
	 p=(struct node*)malloc(sizeof(struct node));
	 p->next=NULL;
	 p->info=x;
	 if(list==NULL)
	 {
	 	list=p;
	 	list->next=list;
	 }
	 else
	 {
	 	q=list;
	 	while(q->next!=list)
	 	{
	 		q=q->next;
		}
	   p->next=list;
	   list=p;
	   q->next=list;
     }
}


void display()							//display
{
 struct node*p;
 p=list;
 while(p->next!=list)
 {
 	printf("%d",p->info);
 	p=p->next;
 }
 if(p->next==list)
 {
 	printf("%d",p->info);
 }
}
