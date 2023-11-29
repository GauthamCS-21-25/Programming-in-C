#include <stdio.h>
#include <math.h>
#define SIZE 4
struct coordinate{
	float x;
	float y;
	float z;
}p[SIZE];
void main()
{
	float d1, d2;
	int i;
	for(i=0;i<4;i++)
	{
		printf("Enter the coordinates of point %d: ", i+1);
		scanf("%f%f%f", &p[i].x, &p[i].y, &p[i].z);
	}
	d1=sqrt(pow((p[1].x-p[0].x),2)+pow((p[1].y-p[0].y),2)+pow((p[1].z-p[0].z),2));
	d2=sqrt(pow((p[3].x-p[2].x),2)+pow((p[3].y-p[2].y),2)+pow((p[3].z-p[2].z),2));
	printf("Distance between (%f,%f,%f) and (%f,%f,%f) is %f units.\n", p[0].x, p[0].y, p[0].z, p[1].x, p[1].y, p[1].z, d1);
	printf("Distance between (%f,%f,%f) and (%f,%f,%f) is %f units.\n", p[2].x, p[2].y, p[2].z, p[3].x, p[3].y, p[3].z, d2);
	printf("Sum of the distance is %f units.\n", d1+d2);
}
