#include<stdio.h>
int main()
{
int marks,x;

printf("\n Enter the marks of the student:");
scanf("%d", &marks);
x=marks/10;

switch(marks)
{

case 100:printf("\n Grade A");
break;

default : 
switch(x)
{
	case 9 : printf("\n Grade A");
	break;

	case 8 : printf("\n Grade B");
	break;

	case 7: printf("\n Grade C");
	break;

	case 6: printf("\n Grade D");
	break;

	case 5: printf("\n Grade E");
	break;

	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
	printf("Grade F - Failed");
	break;


	default:
	printf("Enter a mark between 0 to 100");
	break;
}// end daughter switch
break;
} // end parent switch
return 0;
}

