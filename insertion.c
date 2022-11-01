#include<stdio.h>
#include<stdlib.h>

void display(int a[],int n);
void insertionsort(int a[],int n);
int main()
{
	int a[100],n,i;
printf("enter no. of elements:");
scanf("%d\n",&n);

	for(i=0;i<n;i++)
		{
           scanf("%d",&a[i]);	
		}
	
		insertionsort(a,n);
		display(a,n);
}
void display(int a[],int n)
 {
 		int i;
 	for(i=0;i<n;i++)
 	 {
 	 	printf("[%d]",a[i]);
	  }
 }
 
 void insertionsort(int a[],int n)
 {
 	int i,j,temp;
 	for(i=1;i<n;i++)
 	{
 		temp=a[i];
 		j=i-1;
 		
 	  while(j>0 && a[j]>temp)
	   {
	   	a[j+1]=a[j];
	   	j--;
		}
		a[j+1]=temp;	
    }
 }
   
   
 
