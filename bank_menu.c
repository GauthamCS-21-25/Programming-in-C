#include <stdio.h>
#include <stdlib.h>
void main()
{
	int ch;
	char pass[4] = "2821";
	double balance=7500;
	char op;
	double wd, dp;
	do
	{
		printf("-----------------------------------------\n");
		printf("\t Welcome to IDFC Bank\n");
		printf("-----------------------------------------\n");
		printf("1. Balance Check\n");
		printf("2. Withdraw\n");
		printf("3. Deposit\n");
		printf("4. Exit\n");
		printf("---------------------\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		if(ch==4)
			exit(0);
		switch(ch)
		{
			case 1:
				printf("Your balance is Rs.%lf\n", balance);
				break;
			case 2:
				printf("Enter the amount to be withdrawn: ");
				scanf("%lf", &wd);
				balance-=wd;
				printf("Your balance is Rs.%lf\n", balance);
				break;
			case 3:
				printf("Enter the amount to be deposited: ");
				scanf("%lf", &dp);
				balance+=dp;
				printf("Your balance is Rs.%lf\n", balance);
				break;
			default:
				printf("Invalid choice.");
		}
		printf("Do you wish to continue? (y/n) : ");
		scanf(" %c", &op);
	}
	while(op=='y');
}
