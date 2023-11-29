#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n, ch;
	int i,f;
	char op;
	do
	{
		printf("---------------------\n");
		printf("\t Menu\n");
		printf("---------------------\n");
		printf("1. Factorial\n");
		printf("2. Odd or Even\n");
		printf("3. Prime Nnumber\n");
		printf("4. Exit\n");
		printf("---------------------\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		if(ch==4)
			exit(0);
		printf("Enter a number: ");
		scanf("%d", &n);
		switch(ch)
		{
			case 1:
				f=1;
				for(i=2;i<=n;i++)
					f*=i;
				printf("The factorial of %d is %d\n", n, f);
				break;
			case 2:
				if(n%2==0)
					printf("%d is an even number.\n", n);
				else
					printf("%d is an odd number.\n", n);
				break;
			case 3:
				f=1;
				if(n<=0)
					printf("%d is not a natural number.\n", n);
				else if(n==1)
					printf("%d is neither a prime number nor a composite number.\n", n);
				else
				{
					for(i=2;i<n;i++)
						if(n%i==0)
						{
							f=0;
							break;
						}
					if(f==1)
						printf("%d is a prime number.\n", n);
					else
						printf("%d is not a prime number.\n", n);
				}
				break;
			default:
				printf("Invalid choice.\n");
		}
		printf("Do you wish to continue? (y/n) : ");
		scanf(" %c", &op);
	}
	while(op=='y');
}		
