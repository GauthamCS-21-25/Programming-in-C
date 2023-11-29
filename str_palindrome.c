#include <stdio.h>
#include <string.h>
#define SIZE 100
void main()
{
	char st[SIZE],cp[SIZE];
	int i, j, l, flag=1;
	printf("Enter the word: ");
	scanf("%s", st);
   	l=strlen(st);
   	strcpy(cp,st);
   	for(i=0;i<l;i++)
   	{
   		if(((cp[i]>='A')&&(cp[i]<='Z'))||((cp[i]>='a')&&(cp[i]<='z')))
   		{
   			if((cp[i]>='a')&&(cp[i]<='z'))
   				cp[i]-=32;
   		}
    		else
    			flag=0;
    	}
   	if(flag==1)
   	{
		for(i=0, j=l-1;i<=j;i++,j--)
			if(cp[i]!=cp[j])
		   		flag=0;
		if(flag==1)
   			printf("%s is a palindrome word.\n", st);
   		else
   			printf("%s is not a palindrome word.\n", st);
   	}
   	else
   		printf("Invalid word.\n");
}
