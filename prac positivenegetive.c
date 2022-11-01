
#include<stdio.h>
#include<stdio.h>
struct node{
 int info;
 struct node*next;
};

struct node*list,*list1=NULL;

int main()
{
 int a[100],num,i;
 
 printf("How many elements do you want to enter:\n");
 scanf("%d",&num);
 
 for(i=0;i<num;i++)
 {
  scanf("%d",&a[i]);
 }
 
 for(i=0;i<num;i++)
 {
  if(a[i]<0)
  {
   negitive(a[i]);
  }
  else
  {
   positive(a[i]);
  }
 }
 
 display();
}


void positive(int x)
{
 struct node*p,*q;
 
 p=(struct node*)malloc(sizeof(struct node));
 
 p->next=NULL;
 p->info=x;
 
 if(list == NULL)
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

void negitive(int n)
{
 struct node*p,*q;
 
 p=(struct node*)malloc(sizeof(struct node));
 
 p->next=NULL;
 p->info=n;
 
 if(list1 == NULL)
 {
  list1=p;
 }
 else
 {
  q=list1;
  
  while(q->next!=NULL)
  {
   q=q->next;
  }
  q->next=p;
 }
}

void display()
{
 struct node*p,*q;
 
 p=list;
 
 printf("positive");
 while(p!=NULL)
 {
  printf(">>%d",p->info);
  p=p->next;
 }
 printf("\n");
 
 q=list1;
 
 printf("Negative");
 while(q!=NULL)
 {
  printf(">>%d",q->info);
  q=q->next;
 }
 printf("\n");
}


