#include<stdio.h>

int main()
{

int n,i,t1=0,t2=1,s=0;

printf("Enter the number of terms in the fibonacci series:");
scanf("%d", &n);

printf("0 1");
for(i=2;i<n;i++)
{
s=t1+t2;
printf(" %d", s);
t1 = t2;
t2 = s;
}

return 0;
}

