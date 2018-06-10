#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[3][80];
    int i,j,c1=0,c2=0,c3=0,c4=0,c5=0;
    for(i=0;i<3;i++)
    gets(a[i]);
    for(i=0;i<3;i++)
	for(j=0;a[i][j]!='\0';j++)
    if(a[i][j]>='A'&&a[i][j]<='Z') c1++;
    else if (a[i][j]>='a'&&a[i][j]<='z') c2++;
    else if (a[i][j]>='0'&&a[i][j]<='9') c3++;
    else if(a[i][j]==' ') c4++;
    else c5++;
    printf("´óÐ´×ÖÄ¸£º%4d.\nÐ¡Ð´×ÖÄ¸£º%4d.\nÊý×Ö£º%4d.\n¿Õ¸ñ£º%4d.\nÆäËû×Ö·û£º%4d.\n",c1,c2,c3,c4,c5);
	return 0;
}
