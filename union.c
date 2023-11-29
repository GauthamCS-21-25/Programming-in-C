#include <stdio.h>
#define C_SIZE 20
union record
{
	char Name[C_SIZE];
	char House[C_SIZE];
	char City[C_SIZE];
	char State[C_SIZE];
	char Pincode[C_SIZE];
} person;
void main()
{
	printf("Enter the name of the person: ");
	scanf("%s", person.Name);
	printf("Name: %s\n", person.Name);
	printf("Enter the House Name: ");
	scanf("%s", person.House);
	printf("House Name: %s\n", person.House);
	printf("Enter the City: ");
	scanf("%s", person.City);
	printf("City: %s\n", person.City);
	printf("Enter the State: ");
	scanf("%s", person.State);
	printf("State: %s\n", person.State);
	printf("Enter the Pincode of the person: ");
	scanf("%s", person.Pincode);
	printf("Pincode: %s\n", person.Pincode);
}
