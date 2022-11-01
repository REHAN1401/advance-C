#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void bubble(int a[],int n);
void display(int a[],int n);

int main()
{
	int a[100],i,n;
	printf("enter no. of elements=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble(a,n);
    display(a,n);
	
}

void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d,\n",a[i]);
	}
}

void bubble(int a[],int n)
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}
