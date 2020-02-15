#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
 int main()
{
int n,a[n],i,j;
int *ptr;
ptr=&a[0];
printf("enter the size of the array : \n");
scanf("%d",&n);
printf("enter the elements to be added to the array\n");
for(i=0;i<n;i++)
{
	scanf("%d",ptr);
	ptr++;
}
ptr=&a[n-1];
printf("reverse of an array:\n");
for(i=n;i>=1;i--)
{
	printf("element %d is %d \n",i,*ptr);
	ptr--;
}
}
