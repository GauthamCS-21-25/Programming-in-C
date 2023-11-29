#include <stdio.h>
#define ROW 10
#define COL 10

int read(int row, int col);
void add();
void multiply();
void transpose();
void display(int z[ROW][COL], int r, int c);

void main()
{
	int ch;	
	char p;
	do
	{
		printf("MATRIX CALCULATOR\n");
		printf("1. ADDITION\n");
		printf("2. MULTIPLICATION\n");
		printf("3. TRANSPOSE\n");
		printf("\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:
				printf("Addition");
				add();
				break;
			case 2:
				printf("Multiplication");
				//multiply();
				break;
			case 3:
				printf("Transpose");
				//transpose();
				break;
			default:
				printf("Invalid choice.");
		}
		printf("Do you wish to continue? (y/n) : ");
		scanf(" %c", &p);
	}
	while((p=='y')||(p=='Y'));
}
int read(int r, int c)
{
	int arr[ROW][COL];
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			scanf("%d", &arr[i][j]);
	return arr;
}
void add()
{
	int row, col;
	printf("Enter the number of rows in the matrix: ");
	scanf("%d", &row);
	printf("Enter the number of coloumns in the matrix: ");
	scanf("%d", &col);
	printf("Enter the elements to matrix A: \n");
	int a[ROW][COL]=read(row, col);
	printf("Enter the elements to matrix A: \n");
	int b[ROW][COL]=read(row, col);
	display(a, row, col);
}
void display(int z[ROW][COL], int r, int c)
{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
			printf("%d \t", z[i][j]);
		printf("\n");
	}
}
