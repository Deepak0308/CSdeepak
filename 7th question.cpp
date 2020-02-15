#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct customers
{
    char surname[20];
	char firstname[20];
	char middlename[20];
	long long int telephone;
}c[100];  
int main()
{
	int i,n;
	printf("enter the no.of customers:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the details of the customer: %d \n",i+1);
	    printf("enter the surname,firstname,middlename and mobile number :\n ");
	    scanf("%s %s %s %lld",c[i].surname,c[i].firstname,c[i].middlename,&c[i].telephone);
	}
	printf("details of the customers are\n");
		for(i=0;i<n;i++)
	{
	   printf("%s,%c.%c %lld \n",c[i].surname,c[i].firstname[i],c[i].middlename[i],c[i].telephone);
	}
}
