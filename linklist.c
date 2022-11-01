#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  struct node *next;	
};
int main()
{
	 int x,ch;
	 printf("enter a number:");
	 scanf("%d",&x);
	 insert(x);
	 display();	 
}
printf("choice between 1,2,3");

 while(1)  
 {
 	switch(ch)
 	{
 		case 1: printf("insert a value:");
		        for(i=0;i<=x;i++)
				{
				void insert(int x)
					 {
					 	int list;
					 	struct node*p;
					 	p=(struct node*)malloc(sizeof(struct node));
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
			     }
					 break;
 		case 2: 
					void display()
					{
						 int list;
						 struct node* p;
						 p=list;
						 while(p!=NULL)
						 {
						 	printf("%d",p->info);
						 	p=p->next;
						 }
					}


		             
	 
 	
  
 


