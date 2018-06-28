
#include <stdio.h>
int main()
{int length(char *p);
int len;
char str[20];
printf("输入字符:  ");
scanf("%s",str);
len=length(str);
printf("字符长度为 %d.\n",len);
return 0;
}

int length(char *p)          
{int n;
 n=0;
 while (*p!='\0')
  {n++;
   p++;
  }
 return(n);
}
