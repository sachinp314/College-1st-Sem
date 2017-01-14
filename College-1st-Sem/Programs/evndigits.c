#include<stdio.h>

int main()
{

// Declaration variables
int num, even, x;
even=0;
printf("Enter a number:");
scanf("%d", &num);

while(num>0)
{
x=num%10;

if(x%2 == 0)
	{
	even++;
	}

num=num/10;
}
printf("The number of even digits is %d \n", even);
return 0;
} 
