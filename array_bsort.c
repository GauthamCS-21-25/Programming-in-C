#include <stdio.h>
#define SIZE 50
void main()
{
	int n, i, j, k, t;
	int arr[SIZE];
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	printf("Enter the elements to the array: ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
		printf("Array after iteration%d is : ",i+1);
		for(k=0;k<n;k++)
			printf("%d ", arr[k]);
		printf("\n");
	}
	printf("Array after sorting the elements: ");
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	printf("\n");
}
