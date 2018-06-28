#include <stdio.h>
int main()
{int upper=0,lower=0,digit=0,space=0,other=0,i=0;
char *p,s[20];
printf("输入字符:  ");
while ((s[i]=getchar())!='\n') i++;
p=&s[0];
while (*p!='\n')
  {if (('A'<=*p) && (*p<='Z'))
     ++upper;
   else if (('a'<=*p) && (*p<='z'))
     ++lower;
   else if (*p==' ')
     ++space;
   else if ((*p<='9') && (*p>='0'))
     ++digit;
   else
     ++other;
   p++;
  }
printf("大写字母:%d     小写字母:%d",upper,lower);
printf("    空格:%d         数字:%d      其他:%d\n",space,digit,other);
return 0;
}
