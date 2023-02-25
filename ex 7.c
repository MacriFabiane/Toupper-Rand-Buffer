//Vai calcular aumento e de acordo com o cargo. Maria C. fabiane.
#include<stdio.h>
int main (void)
{
    float sal;
    int num;

    printf ("Codigo Cargo \t \t  Percentual\n");
    printf ("1      Escrituario \t 50%\n");
    printf ("2      Secretario  \t 35%\n");
    printf ("3      Caixa       \t 20%\n");
    printf ("4      Gerente     \t 10%\n");
    printf ("5      Diretor     \t Nao tem aumento\n\n");

    printf ("Digite o salario do funcionario: ");
    scanf ("%f", &sal);
    printf ("Digite o codigo correspondente ao cargo do funcionario: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
        printf ("O aumento sera de: R$ %.2f\n", sal*0.50);
        printf ("O novo salario sera de: R$ %.2f", sal*1.5);
        break;
        case 2:
        printf ("O aumento sera de: R$ %.2f\n", sal*0.35);
        printf ("O novo salario sera de: R$ %.2f", sal*1.35);
        break;
        case 3:
        printf ("O aumento sera de: R$ %.2f\n", sal*0.20);
        printf ("O novo salario sera de: R$ %.2f", sal*1.20);
        break;
        case 4:
        printf ("O aumento sera de: R$ %.2f\n", sal*0.10);
        printf ("O novo salario sera de: R$ %.2f\n", sal*1.10);
        break;
        case 5:
        printf ("Nao tem aumento para o diretor");
        break;
    }
    return 0;

}
