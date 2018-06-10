#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char string[5];
    char a,c;
    int i;
    gets(string);
    for(i=0;i<=4;i++)
    {
        c=string[i];
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
        {
            a=27-'c';
            printf("%c",a);
        }
    }
        printf("\n");
    for(i=0;i<=4;i++)
    {
        c=string[i];
		printf("%c",c);
    }
	return 0;
}
