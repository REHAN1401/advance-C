#include<stdio.h>
#include<stdlib.h>
struct node{
 int info;
 struct node*next;
};
struct node*list=NULL;
int main()
{
 int ch,num;
 
 while(1)
 {
  printf("----1.Enter ELements in the node----\n");
  printf("----2.Display all non-zero elements, odd number, even number----\n");
  printf("----3.Display----\n");
  printf("----4.Exit----\n");
  printf("Enter your choise:\n");
  scanf("%d",&ch);
  
  switch(ch)
  {
   case 1:printf("Enter the number:\n");
     scanf("%d",&num);
     insert(num);
     
     break;
   
   case 2:fun();
   
     break;
    
   case 3:display();
     break;
    
   case 4:exit(0);
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

void fun()
{
 int temp=0,even=0,odd=0;
 struct node*p;
 
 p=list;
 while(p!=NULL)
 {
  if(p->info == 0)
  {
   break;
  }
  else
  {
   temp=temp+1;
  }
  if(p->info%2 == 0)
  {
   even = even+1;
  }
  else
  {
   odd = odd+1;
  }
  p=p->next;
 }
 
 printf("Non-Zero Element--->%d\n",temp);
 printf("Even--->%d\n",even);
 printf("Odd--->%d\n",odd);
}

void display()
{
 struct node*p;
 
 p=list;
 
 while(p!=NULL)
 {
  printf("%d--> ",p->info);
  p=p->next;
 }
 printf("\n");
}


