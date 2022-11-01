#include<stdio.h>
#include<stdlib.h>
struct node{
 
 int info;
 struct node*next;
};

struct node*list=NULL;
int n;

void insertAtFront(int x);
void display();
void search();

int main()
{
 int ch,num,d,i;
 
 struct node * p;
 
 while(1)
 {
  printf("1.Insert the value:\n");
  printf("2.Display\n");
  printf("3.Search number:\n");
  printf("4.Exit\n");
 
  printf("Enter your choise:\n");
  scanf("%d",&ch);
 
  switch(ch)
  {
   case 1:printf("Enter number of nodes:\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
      scanf("%d",&num);
      insertAtFront(num);
     }
     
   
     break;
   
   case 2:printf("Display:\n");
       display();
   break;
   
   case 3:printf("Search number:\n");
       search();
   break;
       
   case 4:exit(0);
  }
 }
}
void insertAtFront(int x)
{
 struct node *p,*q;
 int num,i;
      
 p=(struct node*) malloc(sizeof(struct node));
      
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
  printf("%d\n",p->info);
  
  p=p->next;
 }
}

void search()
{
 int d,i,x,flag=0;
 struct node*p;
 
 printf("Enter the number:\n");
 scanf("%d",&d);
 for(i=1,p=list;i<=n,p!=NULL;i++,p=p->next)
 {
  if(p->info==d)
  {
   flag = 1;
   x=i;
  }
 }
 if(flag == 1)
 {
  printf("present\n");
  printf("Position-->%d\n",x);
 }
 else
 {
  printf("Not present\n");
 }
}
