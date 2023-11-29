#include <stdio.h>
#define SIZE 100
void main()
{
	int arr[SIZE], n;
	int *p=&arr[0];
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	printf("Enter the elements to the array: ");
	for(int i=0; i<n; i++)
		scanf("%d", p+i);
	printf("Elements in the array are: ");
	for(int i=0; i<n; i++)
		printf("%d ", *(p+i));
	printf("\n");
}
