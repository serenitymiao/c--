#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int x;
    printf("please enter grade\n");
    scanf ("%d",&x);
    switch (x/10)
	{
        case 10: 
        case 9: printf ("A\n");break;
        case 8: printf ("B\n");break;
        case 7: printf ("C\n");break;
        case 6: printf ("D\n");break;
        default: printf ("E\n");break;
    }
	return 0;
}
