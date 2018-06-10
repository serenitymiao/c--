#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,min,temp,a[10];
    printf("ÇëÊäÈëÕûÊı:\n");
    for (i=0;i<10;i++)
    { 
    printf("please enter ten numbers:\n");
    scanf("%d",&a[i]);
	}
    printf("\n");
    printf("The orginal numbers:\n");
    for (i=0;i<10;i++) 
    printf("%5d",a[i]); 
    printf("\n"); 
    for (i=0;i<10;i++)
    {
	min=i;
    for(j=i+1;j<10;j++)
    if (a[min]>a[j]) min=j;
    temp=a[i]; 
    a[i]=a[min];
    a[min]=temp;
    }
    printf("\n The sorted numbers:\n"); 
    for(i=0;i<10;i++)
    printf("%5d",a[i]);
    printf("\n");
	return 0;
}
