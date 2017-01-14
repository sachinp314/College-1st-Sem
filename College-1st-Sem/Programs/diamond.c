#include<stdio.h>
#include<math.h>

int main()
{

int i,j,k,rows;

printf("Enter the number of rows:" );
scanf("%d", &rows);

for(i=1;i<=rows;i++)
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
}//end rows loop top

for(i=rows;i>1;i--)
{
	for(j=0;j <= (rows-i);j++)
	{
		printf(" ");
	}

	for(k=rows; k <= (2*i-1); k++)
	{
		printf("*");
	}
	

	printf("\n");
}//end rows bottom

return 0;
}
