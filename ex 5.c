// ver se letra esta no alfabeto e se é vogal ou nao
#include <stdio.h>
int main(void)
{
    char letra;
    printf("Digite um caractere: ");
    scanf("%c", &letra);
    letra =toupper (letra);

    if(letra >= 'A' && letra <= 'Z')
    {
        printf("Caractere esta no alfabeto \n");
        switch (letra)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf ("VOGAL %c\n", letra);
                break;
                default:
                printf ("CONSOANTE %c\n", letra);
        }
    }

    else
    {
        printf("Caractere nao eh uma letra\n");
    }
    return 0;
}
