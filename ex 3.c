//verifica se a data eh valida.
#include <stdio.h>
int main (void)
{
    int dia,mes,ano,diamax,anobi;
    printf ("Digite a data (Ex: 25/12/1995 = dd/mm/aaaa): ");
    scanf("%d/%d/%d",&dia,&mes,&ano);

    anobi=(ano%4==0 || ano%400==0 && ano%100!=0);

    if (anobi)
    {
        if (mes==1 || mes==3 || mes==5 || mes==7 || mes== 8 || mes==10 || mes==11 )
        {
          diamax=31;
          if (dia<=31)
          {
             printf ("Data valida");
          }
          else
          {
             printf ("Data nao valida");
          }

        }
        else if (mes==2)
        {
            diamax=29;
            if (dia<=29)
          {
             printf ("Data eh valida");
          }
          else
          {
             printf ("Data nao valida");
          }

        }
        else if(mes==2 || mes==4 || mes==6 || mes==9 || mes==12)
        {
            diamax=30;
            if (dia<=30)
          {
             printf ("Data valida");
          }
          else
          {
             printf ("Data nao valida");
          }
        }
        else if (mes<1 || mes>12)
        {
          printf ("Data nao valida");
        }

    }
    else
    {
        if (mes==1 || mes==3 || mes==5 || mes==7 || mes== 8 || mes==10 || mes==11 )
        {
          diamax=31;
          if (dia<=31)
          {
             printf ("Data valida");
          }
          else
          {
             printf ("Data nao valida");
          }

        }
        else if (mes==2)
        {
            diamax=28;
            if (dia<=28)
          {
             printf ("Data valida");
          }
          else
          {
             printf ("Data nao valida");
          }

        }
        else if(mes==2 || mes==4 || mes==6 || mes==9 || mes==12)
        {
            diamax=30;
            if (dia<=30)
          {
             printf ("Data valida");
          }
          else
          {
             printf ("Data nao valida");
          }
        }
        else if (mes<1 || mes>12)
        {
          printf ("Data nao valida");
        }
    }
    return 0;
}
