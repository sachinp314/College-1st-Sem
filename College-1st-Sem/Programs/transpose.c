#include<stdio.h>

void transpose(int a[][3],int b[][3]);//prototype

int main()

{

int mat[3][3];
int trans[3][3];

int i,j;

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d", &mat[i][j]);
	}
}

transpose(mat,trans);

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d ", trans[i][j]);
	}
	printf("\n");
}
return 0;
}

void transpose(int a[][3],int b[][3])
{
int i,j;
int hold[3];

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		hold[j] = a[i][j];
		b[j][i] = hold[j];
	}
}
return;
}

