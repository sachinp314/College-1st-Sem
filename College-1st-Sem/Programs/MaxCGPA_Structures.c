#include<stdio.h>


struct student
{
char name[20];
float cg;
};

void maxCG(struct student s[], int size);

int main()
{
int n;
printf("No. of students:");
scanf("%d",&n);

struct student slist[n];

int i;

for(i=0;i<n;i++)
{
printf("\nEnter name:");
scanf("%s", slist[i].name);
printf("Enter CGPA:");
scanf("%f", &slist[i].cg);
}

maxCG(slist, n);

return 0;
}

void maxCG(struct student s[], int size)
{
int i,j=0;
float max;
max=s[0].cg;

struct student toppers[size];

for(i=1;i<size;i++)
{
	if(s[i].cg > max)
	{
		max=s[i].cg;
	}

}

for(i=0;i<size;i++)
{
	if(s[i].cg == max)
	{
		toppers[j] = s[i];
		j++;
	}
}

printf("%-20s%5s\n", "Name", "CGPA");
for(i=0;i<j;i++)
{
printf("%-20s%5.1f\n", toppers[i].name,toppers[i].cg);
}

return;
}


