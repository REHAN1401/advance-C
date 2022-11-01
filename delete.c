#include<stdio.h>
#include<stdlib.h>
struct node{
 int info;
 struct node *next;
};

 struct node*list=NULL;


void insert(int pos,int x);
int main()
{
 insert(0,4);
 
}
 
void insert(int pos,int x)
{
 struct node *p,*q;
 int i;
 
 p=((struct node*)malloc(sizeof(struct node)));
 
 p->info=x;
 p->next=NULL;
 
 if(list==NULL)
 {
  p=list;
 }
 else if(pos==1)
 {
  p->next=list;
  list=p;
 }
 else
 {
  for(i=1,q=list;i<pos-1,q->next!=NULL;i++,q=q->next)
  
  ;
  
  p->next=q->next;
  
  q->next=p;
 }
}
