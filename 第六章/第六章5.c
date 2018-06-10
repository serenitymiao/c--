#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[5], i, temp;   
    for (i=0;i<5;i++)
	{  
	printf("please input data:\n");
    scanf("%d",&a[i]);
    }
	printf("\n");
    printf("data:\n");
    for (i=0;i<5;i++)       
    printf("%d",a[i]);
    printf("\n");
    for (i=0;i<2;i++)       
    {
    temp = a[i];          
    a[i] = a[4-i];
    a[4-i] = temp;
    }
    printf("Now data:\n");
    for (i=0;i<5;i++)       
    printf("%d",a[i]);
	return 0;
}
