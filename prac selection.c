#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void selection(int a[],int n);
void display(int a[],int n);

int main()
{
	int i,n;
	int a[100];
	printf("enter the no. of elements=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(a,n);
    display(a,n);
}

void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

void selection(int a[],int n)
{
	int i,temp=0,j,pos;
	for(i=0;i<(n-1);i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[pos])
			{
				pos=j;
			}
		}
		if(pos!=i)
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
		}
	}
}
