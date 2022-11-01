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



int main()
{
 int num,ch;
 while(1)
 {
 printf("\n1.insert at back\n");
 printf("2.display\n");
 printf("3.exit\n");
 
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:printf("enter elements=");
    scanf("%d",&num);
    insertb(num);
    break;
    
  case 2:display();
    break;
     
  case 3: exit(0);		  	

 }
    }
}

void display()
{
   struct node*p;
   p=list;
   while(p!=NULL)
   {
     if((p->info%2)!=0)
     {
    	printf("[%d]",p->info);
	 }
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



