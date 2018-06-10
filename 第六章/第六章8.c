#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[3][4],i,j,max,t,k,c;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		max=a[i][0];t=0;
		for(j=0;j<4;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			    t=j;
			}
		}
	    c=1;
	    for(k=0;k<3;k++)
		{
			if(max>a[k][t])
			{
				c=0;break;
			}
		}
	}
    if(c==0)
	printf("没有鞍点");
    if(c==1)
	printf("鞍点是%d",max);
	return 0;
}
