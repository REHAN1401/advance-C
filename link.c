  
#include<stdio.h>
#include<stdlib.h>

struct node{                               //declaring structure   
 
 int info;
 struct node*next;
};

struct node*list=NULL;

void inter(int x);
void display();
void count();
void deletef();
void inserta(int pos,int x);


int main()                               //calling the function
{ 
 int ch,num;
 while(1)
 {
  printf("1.insert\n");
  printf("2.display\n");
  printf("3.count\n");
  printf("4.delete from front\n");
  printf("5.exit\n");
  printf("6.delete from end\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Insert the number:\n");
     scanf("%d",&num);
     inter(num);
    break;
   
   case 2:printf("Display of element:\n");
    display();
   break;
   
   case 3:printf("Count of element:\n");
    count();
   break;
   case 4:printf("delete an element from front:\n");
   deletef();
   break;
   case 5:exit(0);
   case 6:printf("delete an element from end:\n");
   deleteE();
   break;
   break;

   
  }
  
 }

}

void inter( int x)                      //for inserting the elements
{
 struct node *p;
      
 p=(struct node*) malloc(sizeof(struct node));
      
 p->next=NULL;
 p->info=x;
      
 if(list==NULL)
 {
  list=p;
 }
 else
 {
  p->next=list;
  list=p;
 }
}

void display()                     //for displaying the elements
{
 struct node*p;
 p=list;
 
 while(p!=NULL)
 {
  printf("%d\t",p->info);
  
  p=p->next;
 }
}

void count()                   //for counting the elements
{
 int cnt=0;
 struct node*p;
 p=list;
 
 while(p!=NULL)
 {
  cnt++;
  p=p->next;
 }
 printf("Count=%d\n",cnt);
}

void deletef()                         //for deleteing from front
{
	struct node * p;
	if(list==NULL)
	{
		printf("list is empty");
		
	}
	else if(list->next==NULL)
	{
		free(list);
		list=NULL;
	}
	else
	{
		p=list;
		list=list->next;
		free(p);
		
	}
}

 void deleteE()
{
 struct node*p;
 
 if(list==NULL)
 {
  printf("NO element to delete");     //for deleting from end 
 }
 else if(list==NULL)
 {
  free(list);
  list=NULL;
 }
 else
 {
  for(p=list;p->next->next=NULL;p=p->next)
 
  ;
  
  free(p->next);
  p->next=NULL;
 }
}


 
