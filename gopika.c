#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,u,pdt,factorial;
	char ans,y,Y;
	do
	{
		printf("PROPERTISE OF NUMBER\n");
		printf("--------------------\n");
		printf("1.FACTORIAL\n");
		printf("2.ODD OR EVEN\n");
		printf("3.PRIME OR NOT\n");
		printf("4.EXIT\n");
		printf("enter the digit denoting the required propertise\n");
		scanf("%d",&i);
		printf("enter the number\n");
		scanf("%d",&n);
		// switch(n)
		switch(i) 
		{
			case 1:
				// pdt=1;
				factorial=1;
				// for(j=1;j<=n;j--) 
 				for(j=1;j<=n;j++) 
 				{
 					// factorial=pdt*j;
  					factorial=factorial*j; 
				}
				printf("factorial of %d=%d\n",n,factorial);
				break;
			case 2:
				if(n%2==0)
				{
					printf("%d is even\n",n);
 				}
 				else
 				{
  					printf("%d is odd\n",n);
 				}
 				break;
			case 3:
 				u=0;
 				if((n==0)||(n==1))
 				{
 	 				printf("%d is neither prime nor composite\n",n);
 				}
				for(k=2;k<n;k++)
  				{
  					if(n%k==0)
  					{
  						u++;
  					}
  				}
  				if(u>0)
  				{
  					printf("%d is a composite number\n",n);
  				}
  				else
  				{
  					printf("%d is a prime number\n",n);
  				}
  				break;
			case 4:
 				exit(0);
 			default:printf("invalid statement\n");
 			break;
		}
		printf("do you want to continue Y/N\n");
		scanf(" %c",&ans);
	}
	while(ans==y||ans==Y);
	return(0);
}
