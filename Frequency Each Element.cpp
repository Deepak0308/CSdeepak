#include<stdio.h>
int main()
{
	int i,n,temp=0,count=0;
	printf("Enter no. of elements in array:\t");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=n;i++)	
	{
		for(int j=1;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;				
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\n\nFrequency of each element is as follows:\n");
	
	for(i=1;i<=n;i++)
	{
		if(a[i]==a[i+1])
		{
			count++;
		}
		else
		{
			count++;
			printf("%d occurs %d times\n",a[i],count);
			count=0;
		}
	}
}
