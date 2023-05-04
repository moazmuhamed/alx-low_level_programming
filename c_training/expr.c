#include <stdio.h>
int main(void)
{
int x;
printf(" 1: sports \n");
printf(" 2: geo \n");
printf(" 3: music \n");
printf(" please select a category from (1-333): \n");
scanf("%d", &x);
switch (x)
{
case 1:
		printf("\n you selected sports\n");
break;
case 2:
	printf("\n you selected geo\n");
break;
case 3:
	printf("\n you selected music\n");
break;
default:
	printf("\n wrong fucken choice\n");
}
	return 0;
}
