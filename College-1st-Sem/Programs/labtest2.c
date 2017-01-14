#include<stdio.h>

int main()
{
int s1,s2,s3,i,j,k=0;

scanf("%d %d %d", &s1, &s2, &s3);

for(i=2;i<=s3;i++)
{
	if(((s1%i == 0) && (i < s1)) || ((s2%i == 0) && (i < s2)) || ((s3%i == 0) && (i < s3)))
	{
		printf("Not all primes");
		break;
	}
	else 
	k = 1;

}

if(k == 1)
{
for( j = s1; j <=s3; j++)
{
	for(i = 2; i < j; i++)
	{
		if(j%i == 0)
		{
			k=1;
			break;		
		}
		else
		{
			if((j == s1) || (j == s2) || (j == s3))
			{
			}
			else
			{
			k = 2;
			goto cond;
			}
		}
	}
}

cond:
if(k == 2)
printf("Non Consecutive primes");

else if(k == 1)
printf("Consecutive primes");
}

return 0;
}

