#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int max[100];
void pop();
void push(char x);
int top=-1;
int main()
{
	 int ch,num,i,len;
	 char str[100];
	 printf("enter the string\n");
	gets(str);
	
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		push(str[i]);
	}
	for(i=0;i<len;i++)
	{
		pop();
	}
}
	void pop()
	{
		max[top];
		printf("%c",max[top]);
		top--;
	}
	void push(char x)
	{
		max[++top]=x;
	}

