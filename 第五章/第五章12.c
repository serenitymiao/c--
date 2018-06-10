#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int peach = 0,r = 1, day ;  
    for(day = 9; day > 0; day--)  
    {  
        peach = (r+1) * 2; 
        r= peach;  
    }  
    printf("猴子第一天一共摘了%d个桃子\n",peach);  
	return 0;
}
