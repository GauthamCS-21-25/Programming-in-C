#include <stdio.h>
#include <stdlib.h>
void main()
{
	int ch;
	char op;
	double a,b;
	do
	{
		printf("-------------------------------- \n");
		printf("\tCALCULATOR \n");
		printf("-------------------------------- \n");
		printf("1. Addition\n");
		printf("2. Subtracion\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Exit\n");
		printf("-------------------------------- \n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		if(ch==5)
			exit(0);
		printf("Enter two operands: ");
		scanf("%lf%lf",&a,&b);
		switch(ch)
		{
			case 1:
				printf("%lf + %lf = %lf \n",a,b,a+b);
				break;
			case 2:
				printf("%lf - %lf = %lf \n",a,b,a-b);
				break;
			case 3:
				printf("%lf * %lf = %lf \n",a,b,a*b);
				break;
			case 4:
				printf("%lf / %lf = %lf \n",a,b,a/b);
				break;
			default:
				printf("Invalid choice. \n");
		}
		printf("Do you wish to continue? (y/n) : ");
		scanf(" %c", &op);
	}
	while(op=='y');
}		
