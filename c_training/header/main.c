#include <stdio.h>
#include "myheader.h"



int main ()
{
        int x = 5;
        int y = 7;
        int z = add(x, y);
        pr();
        printf("the sum of %d and %d is %d \n", x, y, z);
        return 0;
}
