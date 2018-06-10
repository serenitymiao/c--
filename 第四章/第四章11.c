#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,n;
	printf("请输入四个数：");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	if(a>b)
	{
		n=a;a=b;b=n;
	}
	if(a>c)
	{
		n=a;a=c;c=n;
	}
	if(a>d)
	{
		n=a;a=d;d=n;
	}
	if(b>c)
	{
		n=b;b=c;c=n;
	}
	if(b>d)
	{
		n=b;b=d;d=n;
	}
	if(c>d)
	{
		n=c;c=d;d=n;
	}
	printf("排序结果如下:\n");
	printf("%d,%d,%d,%d",a,b,c,d);
	return 0;
}
