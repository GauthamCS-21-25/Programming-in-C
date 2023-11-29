#include <stdio.h>
#define SIZE 100
void sum_of_elements (int *A, int s);
void main()
{
	int arr[SIZE], n, sum;
	int *p=&arr[0];
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	printf("Enter the elements to the array: ");
	for(int i=0; i<n; i++)
		scanf("%d", (p+i));
	sum_of_elements(arr, n);
}
void sum_of_elements(int *A, int s)
{
	int sum=0;
	for(int x=0; x<s; x++)
		sum+=*(A+x);
	printf("The sum of elements in the array is: %d.\n", sum);		
}
