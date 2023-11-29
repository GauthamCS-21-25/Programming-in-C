#include <stdio.h>
void main()
{
	int n, i;
	int arr[50];
	int even_no=0, odd_no=0;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	printf("Enter the elements to the array: ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	printf("The elements in the array are: ");
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d is an even number.\n", arr[i]);
			even_no++;
		}
		else
		{
			printf("%d is an odd number.\n", arr[i]);
			odd_no++;
		}
	}
	printf("Total even numbers present: %d\n", even_no);
	printf("Total odd numbers present: %d\n", odd_no);
}
