#include <stdio.h>
void main()
{
	int n,f=0;
	printf("Enter the number: ");
	scanf("%d", &n);
	if(n<0)
		printf("%d is not a natural number.\n", n);
	else if(n==1)
		printf("1 is neither a prime number nor a composite number.\n");
	else
	{
		for(int i=2;i<=n;i++)
			if(n%i==0)
				f++;
		if(f==1)
			printf("%d is a prime number.\n", n);
		else
			printf("%d is not a prime number.\n", n);
	}
}
