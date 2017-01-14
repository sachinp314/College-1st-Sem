#include<stdio.h>

int main()
{
int sec, mins, hours, days;
printf("\n Enter the number of seconds:");
scanf("%d", &sec);

mins=sec/60;
sec=sec%60;

hours=mins/60;
hours=hours%60;

days=hours/24;
days=days%24;

printf("\n %d days, %d hours, %d minutes and %d seconds", days, hours, mins, sec);
return 0;

}
