#include<stdio.h>
#include<math.h>

int main()
{

int i,j,k,l,num,limit;

for(i=1;i<=21;i++)
{
for(j=1;j<=21;j++)
{
for(k=1;k<=21;k++)
{
for(l=1;l<=21;l++)
if(pow(i,3)+pow(j,3) == pow(k,3)+pow(l,3) && i!=j!=k!=l)
{
num = pow(i,3)+pow(j,3);
printf("\n%d", num);
}
}
}
}

return 0;
}



