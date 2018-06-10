#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[30];  
    char s2[10];  
    int len1,len2; 
    int i;  
    printf("ÇëÊäÈë×Ö·û´®1£º\n");  
    gets(s1);  
    printf("ÇëÊäÈë×Ö·û´®2£º\n");  
    gets(s2);  
    len1=strlen(s1);  
    len2=strlen(s2);  
    for(i=0;i<=len2;i++)  
        s1[len1+i]=s2[i];     
    printf("%s\n",s1); 
	return 0£» 
}
