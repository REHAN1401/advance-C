#include<stdio.h>
void display(int a[],int n);
void selection(int a[],int n);

int main()
 {
 	int a[100],n,i;
 	printf("enter no.of elements=");
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
 		printf("[%d]",a[i]);
	 }
 }
 
 void selection(int a[],int n)
 {
 	int i,pos,temp,j;
 	int arr[100];
 	for(i=0;i<(n-1);i++)
 	{
 		pos=i;
	 for(j=i+1;j<n;j++)
	 {
	 
	 	if(a[j]>a[pos])
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

