#include<stdio.h>
#include<math.h>

int main()
{

int num,digits=0,x,i,rev,y,z;

printf("Enter a number:");
scanf("%d", &num);

x = num;
z=num;
while(x > 0)
{
	x=x/10;
	digits++;	
}

rev = 0;

for(i=1;i<=digits;i++)
{
y = num%10;
num=num/10;
rev = rev + y*(pow(10,(digits-i)));
}

if(rev == z)
printf("\nThe number is a palindrome\n");
else
printf("\nThe number is not a palindrome\n");

return 0;
}

