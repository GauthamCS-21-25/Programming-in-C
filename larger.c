#include <stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	
	//if all the three numbers are equal
	
	if((a==b)&&(b==c))
		printf("All the three numbers are equal \n");
		
	//if all three numbers are different
		
	else if((a>b)&&(a>c))
	   printf("%d is the largest number \n", a);
	else if((b>a)&&(b>c))
	   printf("%d is the largest number \n", b);
	else if((c>a)&&(c>b))
	   printf("%d is the largest number \n", c);
	   
	//if any of the numbers are repeated
	
	else if(a==b)
	{
	   if(a>c)
	      printf("%d is the largest number \n", a);
	   else if(c>a)
	      printf("%d is the largest number \n", c);
	}
	else if(a==c)
	{
	   if(a>b)
	      printf("%d is the largest number \n", a);
	   else if(b>a)
	      printf("%d is the largest number \n", b);
	}
	else if(b==c)
	{
	   if(b>a)
	      printf("%d is the largest number \n", b);
	   else if(a>b)
	      printf("%d is the largest number \n", a);
	}
}
