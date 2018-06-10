#include <stdio.h>
int main()
{
	int a=100,b=50,c=10;
	double k,d=0,e=0,f=0;
	for (k=1;k<=a;k++)
	{d=d+k;}
	for (k=1;k<=b;k++)
	{e=e+k*k;}
	for (k=1;k<=c;k++)
	{f=f+1/k;}
	printf("sum=%15.6f\n",d+e+f);
	return 0;
}


