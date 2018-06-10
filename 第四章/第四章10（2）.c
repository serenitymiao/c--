#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n;
	float bonus;
	printf("请输入当月利润：");
	scanf("%d",&i);
	n=i/100000;
	if(n>=10)
	n=10;
	switch(n)
	{
		case 0:bonus=i*0.1;break;
		case 1:bonus=100000*0.1+(i-100000)*0.075;break;
		case 2:
		case 3:bonus=100000*0.1+100000*0.075+(i-200000)*0.05;break;
		case 4:
		case 5:bonus=100000*0.1+100000*0.075+200000*0.05+(i-400000)*0.03;break;
		case 6:
	    case 7:
	    case 8:
	    case 9:bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015;break;
	    case 10:bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01;
	}
	printf("奖金是:%10.2f\n",bonus);
	return 0;
}
