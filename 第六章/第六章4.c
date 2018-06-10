#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10]={1,3,5,9,13,21,28,40,100};
    int temp,i=0,j=0;
    printf("请输入一个数：\n");
    scanf("%d",&temp);
    for(i=8;i>=0;i--)
    {
       if(temp<a[i])
       {
	   a[i+1] = a[i];
	   }
	   else 
	   {
	   a[i+1] = temp;
	   break;
	   }
    }
    for(i=0;i<10;i++)
    printf("%d\t",a[i]);              
	return 0;
}
