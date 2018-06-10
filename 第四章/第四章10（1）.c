#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	float bonus;
	printf("请输入当月利润：");
	scanf("%d",&i);
	if(i<=100000)
	bonus=i*0.1;
	else if(i<=200000)
	bonus=100000*0.1+(i-100000)*0.075;
	else if(i<=400000)
	bonus=100000*0.1+100000*0.075+(i-200000)*0.05;
	else if(i<=600000)
	bonus=100000*0.1+100000*0.075+200000*0.05+(i-400000)*0.03;
	else if(i<=1000000)
	bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015;
	else
	bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01;
	printf("奖金是:%10.2f\n",bonus);
	return 0;
}
