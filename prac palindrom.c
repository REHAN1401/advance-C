#include<stdio.h>
#include<string.h>

#define max 100
void push(char);
char pop();
void display();

char stack[max];
int top=-1;
int main()
{
	char str[100];
	int flag=1,i;
	char x;
	
	printf("enter string:\n");
	scanf("%s",&str);
	
	for(i=0;i<str[i]!='\0';i++)
	{
		push(str[i]);
	}
	for(i=0;i<strlen(str);i++)
	{
		x=pop();
		if(x==str[i])
		{
			continue;
		}
		else
		{
			flag=0;
			break;
		}
	}
	
	if(flag==1)
	{
		printf("palindrom");
	}
	else
	{
		printf("not a palindrom");
	}
}
void push(char x)
{
	if(top==max-1)
	{
		printf("stack is full");
	}
	else
	{
		stack[++top]=x;
	}
}

char pop()
{
	char x;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		x=stack[top];
		top--;
	}
	return x;
}
