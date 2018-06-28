#include <stdio.h>
#include <string.h>
int main()
{void copystr(char *,char *,int);     
 int m;
 char str1[20],str2[20];
 printf("输入字符g:");
 gets(str1);
 printf("从哪个字符开始复制?");
 scanf("%d",&m);
 if (strlen(str1)<m)
   printf("输入错误!");
 else
   {copystr(str1,str2,m);
    printf("结果:%s\n",str2);
   }
 return 0;
}

void copystr(char *p1,char *p2,int m)       
{int n;
 n=0;
 while (n<m-1)
  {n++;
   p1++;
  }
 while (*p1!='\0')
   {*p2=*p1;
    p1++;
    p2++;
   }
 *p2='\0';
}
