#include <stdio.h>
#include <math.h>
void main()
{
	int num, n, d=0, sum=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	n=num;
	while(n>0)
	{
		d++;
		n/=10;
	}
	n=num;
	while(n>0)
	{
		sum+=pow((n%10), d);
		n/=10;
	}
	if(sum==num)
		printf("%d is an Armstrong number.\n", num);
	else
		printf("%d is not an Armstrong number.\n", num);
}
