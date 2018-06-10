#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b;
	printf("please enter a number\n");
	scanf("%f",&a);
	if(a>=1000)
	{printf("please enter another number\n");
	scanf("%f",&a);
	}
	else
	{b=sqrt(a);
	printf("a=%7.0f,b=%7.0f",a,b);
	}
	                                                                                                                                                                                                                                                              
	return 0;
}
