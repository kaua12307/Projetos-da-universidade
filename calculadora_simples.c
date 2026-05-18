#include <stdio.h>

int main()
{
    int numero_1 = 0;
    int numero_2 = 0;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero_1);

    printf("Digite o operador: (+, -, *, /) ");
    scanf("\n %c", &operador);

    printf("digite o segundo numero: ");
    scanf("\n %d", &numero_2);

    switch (operador)
    {

    case '+':

        printf("%d + %d é igual a %d", numero_1, numero_2, numero_1 + numero_2);
        break;

    case '-':

        printf("%d - %d é igual a %d", numero_1, numero_2, numero_1 - numero_2);
        break;

    case '*':

        printf("%d * %d é igual a %d", numero_1, numero_2, numero_1 * numero_2);
        break;

    case '/':

        if (numero_2 == 0)
        {
            printf("erro: divisão por zero não é permitida.");
            return 1; // Encerra o programa com código de erro
        }
        else
        {

            printf("%d / %d é igual a %.2f", numero_1, numero_2, (float)numero_1 / numero_2);
            break;
        }
    default:
        printf("operador invalido");
    }

    return 0;
}