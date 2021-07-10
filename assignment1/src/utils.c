#include "myutils.h"

double sum(int N)
{
int i;
double arr[N], s=0;
printf("Enter %d float/integers ONLY to be added:\n ", N);
for(i=0; i<N; i++)
{
printf("[%d]: ", i+1);
scanf("%lf", &arr[i]);
s = s + arr[i];
}
return s;
}


long long int factorial(long int num)
{
long long int fact=1, i;
for(i = 1; i<=num; i++)
fact = fact * i;

return fact;
}

int isPrime(long int num)
{
int i, flag = 0;

if(num == 1)
return -1;

else
{
for(i=2; i <= num/2; ++i)
{
if(num%i == 0)
{
flag = 1;
break;
}
}

if(flag == 0)
return 1;

else
return 0;
}

}

bool isPallindrome(long int num)
{
long int sum=0, temp, r;
temp = num;
while(num>0)
{
r = num%10;
sum = (sum*10) + r;
num = num/10;
}

if(temp == sum)
return true;
else 
return false;
}

bool isInteger( char *oct)
{
    for(int i=0; oct[i]!='\0'; i++)
        {
            if(oct[i] == '.')
            i++;

        if(isdigit(oct[i]) == false )
            return false;
        }

        return true;
}

void utils_main()
{
char N[50];
int NN;
float Sum;
long long int fact;
long int num;
int prime, pallin, choice;
char ch[50];
while(1)
{
printf("1. Factorial\n2. Prime\n3. Palindrome\n4. Sum\n5. Exit\n");
printf("Enter utility choice:");
scanf("%s", ch);

if(isInteger(ch))
{
choice = atoi(ch);

switch(choice)
{
case 1:
	printf("Enter a number:");
	scanf("%ld", &num);
	fact = factorial(num);
	printf("\nfactorial of the number %ld = %lld\n", num, fact);
	break; 

case 2:
	printf("Enter a number:");
	scanf("%ld", &num);
	prime = isPrime(num);
	if(prime == -1)
	printf("The number 1 is neither Prime nor Composite\n");
	else if(prime == 1)
	printf("The number %ld is a Prime number\n", num);
	else 
	printf("The number %ld is a Composite number\n", num);
	break; 

case 3:
	printf("Enter a number:");
	scanf("%ld", &num);
	pallin = isPallindrome(num);
	if(pallin == 1)
	printf("The number %ld is a Pallindrome\n", num);
	else 
	printf("The number %ld is not a Pallindrome number\n", num);
	break;

case 4: 
	printf("Enter the total number of numbers you wanna add: ");
	scanf("%s" , N);
       if(isInteger(N))
       	{ 
	NN = atoi(N);
	Sum = sum(NN);
	printf("Sum = %lf\n", Sum);
	}
	else printf("Enter integer only\n");
	break;

case 5:
	break;

default:
	printf("Please enter a valid choice range from 1 to 4\n");
	break;
}
	break;
}
	else 
	printf("Please enter integer only\n");

}
}








