#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float s=100,h=s/2;
    int i;
    for(i=2;i<=10;i++)
   {
        s=s+2*h;
        h=h/2;
    }
    printf("s=%f,hight=%f\n",s,h);
	return 0;
}
