#include <stdio.h>
#define SIZE 100
void main()
{
	char str1[SIZE], str2[SIZE];
	int i=0, j;
	printf("Enter the first string (ending with a $ symbol): ");
	gets(str1);
	printf("Enter the second string (ending with a $ symbol): ");
	gets(str2);
	while(str1[i]!='$')
		i++;
	for(j=0;str2[j]!='$';i++,j++)
		str1[i]=str2[j];
	str1[i]='\0';
	printf("Concatenated String: ");
	puts(str1);
}
