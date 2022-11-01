#include<stdio.h>
#include<stdlib.h>

void insertion(int a[],int n);
void display(int a[],int n);

int main()
{
	int i,a[100],n;
	printf("enter the elements=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion(a,n);
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

void insertion(int a[],int n)
{
int i,j,temp;
 for(i=1;i<n;i++)
  {
  for(j=i;j>0 && a[j-1]>a[j];j--)
  {
  		temp=a[i];
			a[i]=a[j-1];
			a[j-1]=temp;
  }
}
}

