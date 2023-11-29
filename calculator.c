#include <stdio.h>
void main()
{
	int ch;
	double a,b;
	printf("-------------------------------- \n");
	printf("\tCALCULATOR \n");
	printf("-------------------------------- \n");
	printf("1. Addition\n");
	printf("2. Subtracion\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("-------------------------------- \n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
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
}
