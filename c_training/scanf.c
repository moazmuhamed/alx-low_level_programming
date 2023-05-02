#include <stdio.h>
int main(void)
{
double first = 0.0, second = 0.0 ;
	


	printf("\t\tadder program\n");
	printf("\t\t=============\n");
	printf("enter first number :\n");
	scanf("%lf", &first);
	   printf("enter second number :\n");
        scanf("%lf", &second);

	printf("%g + %g = %g\n", first, second, first + second);
	
	return 0;

}
