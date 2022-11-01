#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack[100];

void push(char x);
void top_val();
void pop();

int top=-1;
int flag= 0;

int main()
{
 char str[100];
 int i;
 printf("Enter the string:\n");
 scanf("%s",&str);
 
 for(i=0;str[i] != '\0';i++)
 {
  if(str[i]=='(')
  {
   push(str[i]);
  }
  else if(str[i]==')')
  {
   flag=1;
   pop();
  }
  
 }
 top_val();
 
 
}

void top_val()
{
 if(top==-1 && flag == 1)
 {
  printf("valid expresion\n");
 }
 else
 {
  printf("invalid expresion\n");
 }
}

void push(char x)
{
 stack[top]=x;
 top++;
}

void pop()
{
  top--;
}
