#include "myutils.h"
#include "mystring.h"
#include "bitmask.h"

int main()
{
int choice;
char ch[50];
while(1)
{
printf("1. Utilities\n2. String\n3. Bitmasking\n4. Exit\n");
printf("Enter utility choice:");
scanf("%s", ch);

if(isInteger(ch))
{
choice = atoi(ch);

switch(choice)
{
case 1:
utils_main();
break; 

case 2:
string_main();
break; 

case 3:
mask_main();
break;

case 4: exit(0);
break;

default:
printf("Please enter a valid choice range from 1 to 4\n");
break;
}
}
else 
printf("Please enter integer only\n");

}
}



