#include <stdio.h>
#include <stdlib.h>
#define ROW 10
#define COL 10
void main()
{
	int a[ROW][COL], b[ROW][COL], r1, r2, c1, c2, i, j, k, ch;
	printf("******** MATRIX CALCULATIONS ********\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Transpose\n");
	printf("5. Row Sum\n");
	printf("6. Column Sum\n");
	printf("7. Exit\n");
	printf("-------------------------------------\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	if(ch==7)
		sys.exit(0);
	switch(ch)
	{
		case 1:
			printf("Addition");
			break;
		case 2:
			printf("Subtraction");
			break;
		case 3:
			printf("Multiplication");
			break;
		case 4:
			printf("Transpose");
			break;
		case 5:
			printf("Row Sum");
			break;
		case 6:
			printf("Column Sum");
			break;
		case 7:
			sys.exit(0)
			break;
		default:
			printf("Invalid Choice")
			
	}
}
