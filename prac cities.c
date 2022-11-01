#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[10][10],y[10];
	int r,i,n,j,ch,flag=0 ;
	printf("enter no. of cities=");
	scanf("%d",&ch);
	
	for(i=0;i<ch;i++)
	{
		scanf("%s",&a[i]);
	}	
	printf("\n enter city to be searched=");
	scanf("%s",&y);
	
	for(i=0;i<ch;i++)
	{
		r=strcmp(y,a[i]);
		if(r==0)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("present");
	}
	else
	{
		printf("not present");
	}
}
