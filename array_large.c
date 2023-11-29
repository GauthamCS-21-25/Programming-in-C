#include <stdio.h>
void main()
{
	int n, i, large, index;
	int arr[50];
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	printf("Enter the elements to the array: ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	printf("The elements in the array are: ");
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	printf("\n");
	large = arr[0];
	index = 0;
	for(i=1;i<n;i++)
		if(arr[i]>large)
		{
			large=arr[i];
			index = i;
		}
	printf("The largest element in the array is %d at index %d.\n", large, index);
}
