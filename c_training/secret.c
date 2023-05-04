#include <stdio.h>
#define secret 17
int main()
{
	int guess;
	printf("can you guess secret number??\n");
	scanf("%d", &guess);
	if (guess==secret)
	
		printf("your guess is right\n");
if (guess!=secret)
	printf("fuck you bitch\n");
return 1;
}
