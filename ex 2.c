//Vai ver se o cliente esta em risco ou nao. Maria C. Fabiane.
#include<stdio.h>

int main (void)
{
    char letra;
    printf ("Analisa se o clinte de um banco esta em risco\n");
    printf ("Tem saldo em conta corrente? (Responda com S para sim ou N para nao) ");
    scanf ("%c", & letra);

    if (letra == 'N' || letra =='n')
    {
        printf ("Possui aplicacoes? ");
        setbuf (stdin, NULL);
        scanf ("%c", &letra);
        if (letra =='S' || letra =='s')
        {
            printf("Cliente em risco");
        }
        else if (letra =='N' || letra =='n' )
        {
            printf ("Cliente seguro");
        }
    }
     else if (letra =='S' || letra =='s')
        {
            printf ("Cliente seguro");
        }
        return 0;
}
