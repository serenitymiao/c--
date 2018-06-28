#include <stdio.h>
#include <string.h>
#define N 10
char str[N];
int main()
{void sort(char []);
 int i,flag;
 for (flag=1;flag==1;)
  {printf("输入字符:\n");
   scanf("%s",&str);
   if (strlen(str)>N)
     printf("字幕太长，再输一次!");
   else
     flag=0;
  }
 sort(str);
 printf("排序结果:\n");
 for (i=0;i<N;i++)
  printf("%c",str[i]);
 printf("\n");
 return 0;
}

void sort(char str[])
{int i,j;
 char t;
 for(j=1;j<N;j++)
   for (i=0;(i<N-j)&&(str[i]!='\0');i++)
     if(str[i]>str[i+1])
       {t=str[i];
    	str[i]=str[i+1];
	    str[i+1]=t;
       }
}

