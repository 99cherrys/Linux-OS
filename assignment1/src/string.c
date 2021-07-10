#include "mystring.h"
#include "myutils.h"

int str_len (char *s)
{
int n = 0;
 while(s[n] != '\0')
n++;

return n;
}

void str_cpy(char *s1, char *s2)
{
int i;
for(i=0; s1[i]!='\0'; ++i)
{
s2[i] = s1[i];
}
s2[i] = '\0';
}

void str_cat( char *s1, char *s2)
{
int i, j;
i = str_len(s1);
for(j=0; s2[j]!='\0'; i++, j++)
s1[i] = s2[j];

s1[i] = '\0';

}

int str_cmp(char *s1, char *s2)
{
int flag = 0, i = 0;

while(s1[i]!='\0' && s2[i]!='\0')
{
if(s1[i] != s2[i])
{
flag = 1;
break;
}
i++;
}

return flag;
}

void string_main()
{
int choice, len, c;
char s1[100], s2[100], s3[100], ch[50];
printf("Enter string:");
scanf("%s", s1);

while(1)
{
printf("1. String length\n2. String copy\n3. String concat\n4. String compare\n5. Exit\n");
printf("Enter your choice:");
scanf("%s", ch);

if(isInteger(ch))
{
choice = atoi(ch);

switch(choice)
{
case 1:
len = str_len(s1);
printf("Length of the string = %d\n", len);
break;

case 2:
str_cpy(s1, s2);
printf("String s2 = %s\n", s2);
break;

case 3:
printf("Enter the string to concatenate : ");
str_cpy(s1, s2);
scanf("%s", s3);
str_cat(s2, s3);
printf("The concatented strings are %s : \n", s2);
break;

case 4:
printf("Enter the string to be compared : ");
str_cpy(s1, s2);
scanf("%s", s3);
c = str_cmp(s2, s3);
if(c == 0)
printf("The two strings %s and %s are same\n", s2, s3);
else
printf("The two strings %s and %s are different\n", s2, s3);
break;

case 5: 
break;

default: printf("Please enter valid choice ranging 1 to 5 only\n");
break;

}
break;
}

else
printf("Please enter valid integer only\n");

}
}

