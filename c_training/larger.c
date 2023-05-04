#include <stdio.h>
int main()
{
	int a, b, larger;
	printf("give number A\n");
	scanf("%d", &a);

	printf("give numer B\n");
	scanf("%d", &b);
	larger = (a > b) ? a : b;
	printf("\t %d is larger\n", larger);
	return 0;
}
