#include<stdio.h>
#include<conio.h>

void display(int a[],int n);
void BubbleSort(int a[],int n);

int main()
{
int a[100],n,i;
printf("enter no. of elements:");
scanf("%d\n",&n);

	for(i=0;i<n;i++)
		{
           scanf("%d",&a[i]);	
		}
	    display(a,n);
		BubbleSort(a,n);
	
}
void display(int a[],int n)
 {
 	int i;
 	for(i=0;i<n;i++)
 	{
 		printf("[%d]",a[i]);
	 }
 }
 
 void BubbleSort(int a[],int n)
 {
 	int i,j,temp=0;
 	for(i=0;i<n;i++)
 	 {
 	 	for(j=i+1;j<n;j++)
 	 	{
 	 		if(a[i]>a[j])
 	 		{
 	 			temp=a[j];
 	 			a[j]=a[i];
 	 			a[i]=temp;
			}
		  }
	  }
 }
