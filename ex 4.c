//Brinca de adivinhação de um numero. MCF
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (void)
{
    int num, lim=10, x;
    printf ("Tente adivinhar o numero magico de 0 a 10: ");
    scanf ("%d", &num);
    srand (time (NULL));

    x=rand()% lim+1;

    if (num>x)
    {
        printf ("Muito alto, o numero magico era %d", x);
    }
    else if (num<x)
    {
        printf ("Muito baixo, o numero magico era %d", x);
    }
    else if (num==x)
    {
        printf ("Acertou! Esse era o numero magico %d", x);
    }
    return 0;
}
