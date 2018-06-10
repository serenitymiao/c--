#include <stdio.h>
int main()
{
	int a,n,i=1,SN=0,TN=0;
	printf("a,n=:\n");
	scanf("%d,%d",&a,&n);
	while (i<=n)
	{
		TN=TN+a;
		SN=SN+TN;
	    a=a*10;
		++i;
	}
	printf("a+aa+aaa+...=%d\n",SN);
	return 0;
}
