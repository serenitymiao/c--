#include <stdio.h>
#include <string.h>
int main()
{int al(char);
 int lo(char []);
 int i;
 char line[100];
 printf("输入字符:\n");
 gets(line);
 printf("最长的单词:");
 for (i=lo(line);al(line[i]);i++)
   printf("%c",line[i]);
 printf("\n");
 return 0;
}

int al(char c)
{if ((c>='a' && c<='z')||(c>='A'&&c<='z'))
  return(1);
 else
  return(0);
}

int lo(char string[])
{int len=0,i,length=0,flag=1,place=0,point;
 for (i=0;i<=strlen(string);i++)
   if (al(string[i]))
     if (flag)
      {point=i;
       flag=0;
      }
     else
       len++;
   else
     {flag=1;
      if (len>=length)
	{length=len;
	 place=point;
	 len=0;
	}
     }
 return(place);
}



