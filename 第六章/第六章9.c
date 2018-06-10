#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n[15] = {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int num, start, end, mid;
    for (start=0, end=14, printf("Please enter number: "), scanf("%d", &num); start<=end;)
	{
        mid=(start+end)/2;
        if (num>n[mid]) end=mid-1;
        else if (num<n[mid]) start=mid+1;
        else
		{
            printf("%d is No.%d number!\n", num, mid+1);
            break;
        }
    }
    if (num!=n[mid]) printf("No match!\n");
	return 0;
}
