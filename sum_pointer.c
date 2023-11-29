#include <stdio.h>
void swap_value(int *x, int *y);
void main()
{
	int a, b, sum;
	int *pa, *pb;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	pa=&a;
	pb=&b;
	sum=*pa+*pb;
	printf("The sum of %d and %d is %d.\n", *pa, *pb, sum);
	//swappig
	swap_value(&a, &b);
}
void swap_value(int *x, int *y)
{
	int *temp;
	temp=x;
	x=y;
	y=temp;
	printf("After swapping, value of a is %d and value of b is %d.\n", *x, *y);
}
