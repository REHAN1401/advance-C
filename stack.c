   #include<stdio.h>
   #include<stdlib.h>
#define max 10
int top=-1;
int arr[max];

void push(int data);
int isempty();

int main()
{
	 push(5);
	 push(10);
	 push(4);
	 pop();
	 peek();
	 display();
}
void push(int data)
{
	 if(!full())
	 {
	 	top=top+1;
	 	arr[top]=data;
	 }
}
int full()
{ 
   if(top==max-1)
{
   printf("stack is full");
   return 1;
}
 else
 {
 	return 0;
 }
}
int isempty()
{
	 if(top==-1)
	 {
	 	return 1;
	 }
 else
 {
 	return 0;
 }
}
void pop()
{
	 if(isempty())
	 {
	 	printf("the stack is empty");
	 }
	 else
	 {
	 	top=top-1;
	 }
	 
}
void peek()
{
	printf("element at the top=%d\n",arr[top]);
}

void display()
 {
   if(top>=0) 
   {
   	 int i;
      printf("Stack elements are:");
      for(i=top; i>=0; i--)
      printf("[%d]",arr[i]);
   } else
   printf("Stack is empty");
}
