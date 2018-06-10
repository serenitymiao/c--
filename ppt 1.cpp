#include<stdio.h>
#define PI 3.1415926
main()
{
	float r,area;
	scanf("%f",&r);
	area=PI*r*r;
	printf ("PI=%fr=%f\narea=%f\n",PI,r,area);
	return 0;
}
