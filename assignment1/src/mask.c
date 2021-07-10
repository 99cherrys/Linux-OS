#include "bitmask.h"
#include "myutils.h"

void set_bit()
{
char num[50], pos[50];
int N, P, NNum;
while(1)
{
printf("Enter any integer number only: ");
scanf("%s", num);
printf("Enter position bit to set in range 0 to 31 only: ");
scanf("%s", pos);
if(isInteger(num) && isInteger(pos))
{
N = atoi(num);
P = atoi(pos);

if(P<32)
{
NNum = (1 << P) | N;
printf("Bit set successfully. \n");
printf("Number before setting %d bit: %d (in decimal)\n", P, N);
printf("Number after setting %d bit: %d (in decimal)\n", P, NNum);
}
else 
printf("Enter an integer number range from 0 to 31 ONLY\n");
break;
}

else printf("Please enter INTEGER only\n");
}
}

void reset_bit()
{
char num[50], pos[50];
int N, P, NNum;
while(1)
{
printf("Enter any Integer number: ");
scanf("%s", num);
printf("Enter Position bit to reset in range 0 to 31 only: ");
scanf("%s", pos);
if(isInteger(num) && isInteger(pos))
{
N = atoi(num);
P = atoi(pos);

if(P<32)
{
NNum = N & (~(1 << P));
printf("Bit reset successfully. \n");
printf("Number before resetting %d bit: %d (in decimal)\n", P, N);
printf("Number after resetting %d bit: %d (in decimal)\n", P, NNum);
}
else 
printf("Enter an integer number range from 0 to 31 ONLY\n");
break;
}

else printf("Please enter INTEGER only\n");
}
}

void flip_bit()
{
char num[50], pos[50];
int N, P, NNum;
while(1)
{
printf("Enter any Integer number: ");
scanf("%s", num);
printf("Enter Position bit to flip in range 0 to 31 only: ");
scanf("%s", pos);
if(isInteger(num) && isInteger(pos))
{
N = atoi(num);
P = atoi(pos);

if(P<32)
{
NNum = N ^ (~(1 << P));
printf("Bit flipped successfully. \n");
printf("Number before flipping %d bit: %d (in decimal)\n", P, N);
printf("Number after flipping %d bit: %d (in decimal)\n", P, NNum);
}
else 
printf("Enter an integer number range from 0 to 31 ONLY\n");
break;
}

else printf("Please enter INTEGER only\n");
}
}

void query_bit()
{
char num[50], pos[50], bit[50];
int N, P, NNum, k;
while(1)
{
printf("Enter any Integer number: ");
scanf("%s", num);
printf("Enter Position bit to query in range 0 to 31 only: ");
scanf("%s", pos);
printf("Enter number of bits to be extracted: ");
scanf("%s", bit);
if(isInteger(num) && isInteger(pos) && isInteger(bit))
{
N = atoi(num);
P = atoi(pos);
k = atoi(bit);
if(P<32)
{
NNum = (((1 << k) - 1) & (N >> (P-1)));
printf("Bit Queried successfully. \n");

printf("Number after Querying %d position %d bits: %d (in decimal)\n", P, k, NNum);
}
else 
printf("Enter an integer number range from 1 to 32 ONLY\n");
break;
}

else printf("Please enter INTEGER only\n");
}
}

 void mask_main()
{
int choice;
char ch[50];

while(1)
{
printf("1. Set\n2. Reset\n3. Flip\n4. Query\n5. Exit\n");
printf("Enter your choice:");
scanf("%s", ch);

if(isInteger(ch))
{
choice = atoi(ch);

switch(choice)
{
case 1:
 set_bit();
break;
 
case 2:
 reset_bit();
break;

case 3:
flip_bit();
break;

case 4:
query_bit();
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

