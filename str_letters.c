#include <stdio.h>
#define SIZE 100
void main()
{
	char str[SIZE];
	int i, vowel=0, consonant=0, space=0, special=0, digit=0;
	printf("Enter the string (ending with a $ symbol): ");
	gets(str);
	for(i=0; str[i]!='$'; i++)
	{
		if((str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U')||(str[i]=='a')|(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
			vowel++;
		else if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z')))
			consonant++;
		else if(str[i]==' ')
			space++;
		else if((str[i]>='0')&&(str[i]<='9'))
			digit++;
		else
			special++;
	}
	printf("Number of vowels present: %d\n", vowel);
	printf("Number of consonants present: %d\n", consonant);
	printf("Number of white spaces present: %d\n", space);
	printf("Number of digits present: %d\n", digit);
	printf("Number of special characters present: %d\n", special);
}
