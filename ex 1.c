//verifica se o ano digitado eh bissesto. Maria C. Fabiane
#include<stdio.h>

int main (void)
{
    int ano;
    printf ("Inisira um ano, e descubra se ele eh bissesto: ");
    scanf ("%d", &ano);

    if (ano%4==0 || ano%400==0 && ano%100!=0)
    {
        printf ("Esse ano eh bissesto");
    }
    else
    {
        printf ("Esse ano nao eh bissesto");
    }
    return 0;
}
