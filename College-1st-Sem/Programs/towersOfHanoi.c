#include<stdio.h>

void towersOfHanoi(char from, char to, char temp, int n);

int main()
{

char a,b,c;
int disks;

printf("Enter the from disk, to disk, temp disk and number of disks in order:");
scanf(" %c %c %c %d", &a, &b, &c, &disks);

towersOfHanoi(a, b, c, disks);

return 0;
}

void towersOfHanoi(char from, char to, char temp, int n)
{
if(n==0) return;

towersOfHanoi(from, temp, to, n-1);

printf("%c to %c \n", from, to);

towersOfHanoi(temp, to, from, n-1);
}


