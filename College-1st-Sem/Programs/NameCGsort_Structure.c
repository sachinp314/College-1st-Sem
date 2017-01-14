#include<stdio.h>
#include<string.h>


struct student
{
char name[20];
float cg;
};

void nameSort(struct student s[], int size);
void cgSort(struct student s[], int size);
void swap(struct student *p1, struct student *p2);

int main()
{
int n;
printf("No. of students:");
scanf("%d",&n);

struct student slist[n];

int i;

for(i=0;i<n;i++)
{
printf("\nName:");
scanf("%s", slist[i].name);
printf("CGPA:");
scanf("%f", &slist[i].cg);
}

nameSort(slist, n);

cgSort(slist, n);

return 0;
}

void nameSort(struct student s[], int size)
{
int pass,i,j;
for(pass=0;pass<(size-1);pass++)
{
	for(i=0;i<(size-1);i++)
	{

		int len = strlen(s[i].name);
		for(j=0;j<len;)
		{
			if((int)s[i].name[j] > (int)s[i+1].name[j])
			{
			swap(&s[i],&s[i+1]);
			break;
			}
			
			if((int)s[i].name[j] == (int)s[i+1].name[j])
			{
			j++;
			}

			if((int)s[i].name[j] < (int)s[i+1].name[j])
			{
			break;
			}
		}
	}
}

printf("%-20s%6s\n", "Name", "CGPA");
for(i=0;i<size;i++)
{
printf("%-20s%6.2f\n", s[i].name, s[i].cg);
}

return ;
}

void cgSort(struct student s[], int size)
{
int pass,j,i;
for(pass=0;pass<(size-1);pass++)
{	
	for(j=0;j<(size-1);j++)
	{
		if(s[j].cg < s[j+1].cg)
		{
		swap(&s[j],&s[j+1]);
		}
	}
}

printf("%-20s%6s\n", "Name", "CGPA");
for(i=0;i<size;i++)
{
printf("%-20s%6.2f\n", s[i].name, s[i].cg);
}

return;
}

void swap(struct student *p1,struct student *p2)
{
struct student tmp;
tmp = *p1;
*p1 = *p2;
*p2 = tmp;
return;
}

