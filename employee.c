#include <stdio.h>
#define SIZE 100
struct record{
	char name[20];
	int id;
	float salary;
} emp[SIZE];
void main()
{
	int n,i;
	printf("Enter the number of employees: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter the name of empolyee %d: ", i+1);
		scanf("%s", emp[i].name);
		printf("Enter the employee id of empolyee %d: ", i+1);
		scanf("%d", &emp[i].id);
		printf("Enter the salary of empolyee %d: ", i+1);
		scanf("%f", &emp[i].salary);
	}
	printf("The record of employees are: \n");
	printf("Name \t Employee ID \t Salary \n");
	for(i=0;i<n;i++)
		printf("%s \t %d \t %f \n", emp[i].name, emp[i].id, emp[i].salary);
}
