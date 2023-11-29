#include <stdio.h>
#define SIZE 50
void main()
{
	int n, i, se, flag=0;
	int arr[SIZE];
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	printf("Enter the elements to the array: ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	printf("Enter the element to be searched: ");
	scanf("%d", &se);
	for(i=0;i<n;i++)
		if(arr[i]==se)
		{
			flag=1;
			printf("%d found at index %d\n", se, i);
		}
	if(flag==0)
		printf("%d not found in the array.\n", se);
}
