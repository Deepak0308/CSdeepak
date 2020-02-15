#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
 
int main() 
{
   int arr[20], i, j, k, size;
 
   printf("\nEnter array size : ");
   scanf("%d",&size);
 
   printf("\nAccept Numbers : ");
   for (i = 0; i < size; i++)
      scanf("%d", &arr[i]);
 
   printf("\n modified array : ");
   for (i = 0; i < size; i++) 
   {
      for (j = i + 1; j < size;) 
	  {
         if (arr[j] == arr[i]) 
		 {
            for (k = j; k < size; k++) 
			{
               arr[k] = arr[k + 1];
            }
            size--;
         } 
		 else
         j++;
      }
   }
 
   for (i = 0; i < size; i++) 
   {
      printf("%d ", arr[i]);
   }
 
   return (0);
}
