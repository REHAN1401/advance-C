#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[50];
int i,n,x;
printf("enter number=");
scanf("%d",&n);
printf("\nenter sorted array=");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter no. u want to search=");
scanf("%d",&x);
x=binary(a,n,x);
if(x==-1)
{
	printf("not present");
}
else
{
	printf("present");
}

}


int binary(int a[],int n,int x)
{
	int l=0,r=n-1,m;
	while(l<=r)
	{
		m=r+(l-r)/2;
		if(x==a[m])
		return 1;
		
		if(x>a[m])
		{
			l=m+1;
		}
		if(x<a[m])
		{
		r=m-1;
	    }
	}
		return -1;
			
	
}

