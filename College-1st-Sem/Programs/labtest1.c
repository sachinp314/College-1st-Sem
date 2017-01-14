#include<stdio.h>

int main()
{
int s1,s2,s3,i,j,k=0;

printf("Enter three numbers:");
scanf("%d %d %d", &s1, &s2, &s3);

for(i=2;i<=s3;i++)
{
	if(((s1%i == 0) && (i < s1)) || ((s2%i == 0) && (i < s2)) || ((s3%i == 0) && (i < s3)))
	{
		k = 0;
		break;
	}
	else 
	k = 1;

}

if(k==0)
{
	printf("Not all primes");
}
else
{
if(k == 1)
{
	for(j=s1; j <=s3 ; j++)
	{
		for(i=2;i<=s3;i++)
		{
			
			if(j%i == 0 && i < j)
			{
			
					if(j == s1 || j == s2 || j == s3)
					{	
						k = 2;
					}
					else
					{
						printf("Non Consecutive primes");
						return 0;
					}
				}
			}

			
		}
	}
}
}

if(k == 2)
printf("Consecutive primes");



return 0;
}
