#include<stdio.h>
#include<math.h>

int main()
{

int i,j,k,rows;

printf("Enter the number of rows:" );
scanf("%d", &rows);

for(i=1;i<=(rows+1)/2;i++)
{
	for(j=1;j <= (rows-i);j++)
	{
		printf(" ");
	}

	for(k=1; k <= (2*i-1); k++)
	{
		printf("*");
	}
	

	printf("\n");
}// end top loop

for(i=(rows-1)/2;i >= 1;i--)
{
	for(j=1;j <= (rows-i);j++)
	{
		printf(" ");
	}

	for(k=1; k <= (2*i-1); k++)
	{
		printf("*");
	}
	

	printf("\n");
}//end loop down

return 0;
}//end main
