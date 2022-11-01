#include<stdio.h>
#include<stdlib.h>
struct node{
 int info;
 struct node*next;
};

struct node*list,*list1=NULL;

int main()
{
 int num,num1,ch;
 
 while(1)
 {
  printf("--1.Enter Elements in 1st list--\n");
  printf("--2.Enter Elements in 2nd list--\n");
  printf("--3.Display 1st list--\n");
  printf("--4.Display 2nd list--\n");
  printf("--5.Concatenate the lists--\n");
  printf("--6.Exit--\n");
  printf("Enter your choice:");  
  scanf("%d",&ch);
  
  switch(ch)
  {
   case 1:printf("Enter number in 1st list:\n");
     scanf("%d",&num);
     insert(num);
     break;
     
   case 2:printf("Enter number in 2nd list:\n");
     scanf("%d",&num1);
     insert2(num1);
     break;
     
   case 3:display();
     break;
     
   case 4:display1();
     break;
    
   case 5:concat();
     break;
     
   case 6:exit(0);
  }
 }
 
}

void insert(int x)
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

void insert2(int n)
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
 struct node*p;
 
 p=list;
 
 while(p!=NULL)
 {
  printf("%d",p->info);
  p=p->next;
 }
 printf("\n");
}

void display1()
{
 struct node*p;
 
 p=list1;
 
 while(p!=NULL)
 {
  printf("%d",p->info);
  p=p->next;
 }
 printf("\n");
}

void concat()
{
 struct node*p,*q;
 
 p=list;
 
 while(p->next!=NULL)
 {
  p=p->next;
 }
 p->next=list1;
 
 q=list;
 while(q!=NULL)
 {
  printf("%d-->",q->info);
  q=q->next;
 }
 printf("\n");
}


