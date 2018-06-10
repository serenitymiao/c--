#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,e,n,m;
	printf("请输入一个不多于5位的正整数\n");
	scanf("%d",&m);
	if(m>9999) n=5;
	else if(m>999) n=4;
	else if(m>99) n=3;
	else if(m>9) n=2;
	else n=1;
	printf("位数:%d\n",n);
	a=m/10000;
	b=(m-a*10000)/1000;
	c=(m-a*10000-b*1000)/100;
	d=(m-a*10000-b*1000-c*100)/10;
	e=(m-a*10000-b*1000-c*100-d*10);
	printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
	if(n=5) printf("反向数为：%d%d%d%d%d\n",e,d,c,b,a);
	else if(n=4) printf("反向数为：%d%d%d%d\n",e,d,c,b);
	else if(n=3) printf("反向数为：%d%d%d\n",e,d,c);
	else if(n=2) printf("反向数为：%d%d\n",e,d);
	else printf("反向数为：%d\n",e);
    return 0;
}
