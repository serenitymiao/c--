#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[3][3],i,j,sum=0;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
	printf("请输入一个整数：\n") ;
    scanf("%d",&a[i][j]);
    }
    printf("\n");
    printf("The orginal numbers:\n"); 
	for(i=0;i<3;i++)
	for(j=0;j<3;j++) 
    printf("%5d",a[i][j]); 
    printf("\n");  
	for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {if(i==j||i+j==2)
     sum+=a[i][j];
    }
    }
	printf("sum=%d\n",sum);
	return 0;
    }
