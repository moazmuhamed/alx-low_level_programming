#include <stdio.h>
#define printf__mingw_printf
int main(void)
{
float x = 3.1416, y = 1.2e-5, z = 500000.0;
printf("x = %f\n", x);
printf("y = %f\n", y);
printf("z = %f\n", z);


printf("x = %e\n", x);
printf("y = %e\n", y);
printf("z = %e\n", z);




printf("x = %g\n", x);
printf("y = %g\n", y);
printf("z = %g\n", z);
}
