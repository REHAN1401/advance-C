#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=-1;
int stack[100];

void push(char x);
void pop();
void top_val();
int main()
{
	char str[100];
	int i;
	printf("enter the element\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(')
		{
			push(str[i]);
		}
		else if(str[i]==')')
		{
			pop();
		}
	}
	top_val();
}

void top_val()
{
	if(top==-1)
		printf("parenthesis");
	else
		printf("not a paenthesis");

}

void pop()
{
	top--;
}

void push(char x)
{
	stack[top]=x;
	top++;
}
