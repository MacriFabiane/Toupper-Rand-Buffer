#include<stdio.h>
#include<stdlib.h> // para a função rand
#include<time.h> // para time

int main (void)
{
    int x;

    srand (time (NULL));

    x = rand() % 3-1;
    printf ("RAND_MAX = %d", RAND_MAX);
    printf (" semente %d\n ", x);
    return 0;
}
