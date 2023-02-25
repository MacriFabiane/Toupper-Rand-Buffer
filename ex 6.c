
#include<stdio.h>
int main (void)
{
    int d1,d2,m1,m2,a1,a2;

    printf ("Informe a primeira data:");
    printf ("Escreva o dia (dd): ");
    scanf ("%d", &d1);
    printf ("Escreva o mes (mm): ");
    scanf ("%d", &m1);
    printf ("Escreva o ano (aaaa): ");
    scanf ("%d", &a1);

    printf ("Informe a segunda data:");
    printf ("Escreva o dia (dd): ");
    scanf ("%d", &d2);
    printf ("Escreva o mes (mm): ");
    scanf ("%d", &m2);
    printf ("Escreva o ano (aaaa): ");
    scanf ("%d", &a2);

    if (a1>a2)
    {
        printf ("A maior data eh: %d/ %d/ %d", d1, m1, a1);
    }
    else if (a1<a2)
    {
        printf ("A maior data eh: %d/ %d// %d", d2, m2, a2);
    }
    else if (a1==a2 && m1>m2)
    {
        printf ("A maior data eh: %d/ %d/ %d", d1, m1, a1);
    }
    else if (a1==a2 && m1<m2)
    {
        printf ("A maior data eh: %d/ %d/ %d", d2, m2, a2);
    }
    else if (a1==a2 && m1==m2 && d1>d2)
    {
        printf ("A maior data eh: %d/ %d/ %d", d1, m1, a1);
    }
    else if (a1==a2 && m1==m2 && d1<d2)
    {
        printf ("A maior data eh: %d/ %d/ %d", d2, m2, a2);
    }
return 0;
}
