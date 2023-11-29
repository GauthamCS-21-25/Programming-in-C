#include <stdio.h>
#define SIZE 50
void main()
{
	int n, i, sum=0;
	float avg;
	int arr[SIZE];
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	printf("Enter the elements to the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	avg=sum/(float)n;
	printf("The sum of the elements in the array is %d.\n", sum);
	printf("The average of the elements in the array is  %f.\n", avg);
}
