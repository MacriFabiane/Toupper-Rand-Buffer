#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main(void)
{
    float x;

    srand(time(NULL));
    x = (float)(rand()) / RAND_MAX;
    printf("%.4f\n", x);

    return 0;
}

