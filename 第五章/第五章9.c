#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,temp,sum; 
    for(n=1;n<1000;n++) 
    {
        sum= 0;
        for(temp=1;temp<n;temp++)
        {
            if(n%temp==0) 
            {
                sum=sum+temp; 
            }
        }
        if(sum==n) 
        {
            printf("%d its factors are ",n);
            for(temp=1;temp<n;++temp)
            {
                if(n%temp==0)
                {
                    printf("%d ",temp);
                }
            }
            printf("\n");
        }
         
    }
	return 0;
}
