int i,j,k;
for(i = 1; i<=20; i++)
{
for(j=1; j<=20; j++)
{
for(k=1; k<=20; k++)
{
if(i^2 + j^2 == k^2)
{printf("\n %d,%d,%d \n", i, j, k);}
}
}
}
return 0;
