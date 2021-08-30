
#include <stdio.h>

void main()
{
    int n, numero = 2, multip = 1;
    printf("Digite um numero para ser decomposto:\n");
    scanf("%d", &n);
    int numero2 = n;
    printf("%d = ", n); //impressão do número antes da decomposição
    while (multip < numero2)
    {
        if (n % numero == 0) //A divisão começará a partir do primeiro número primo, ou seja, 2
        {
            printf("%d x ", numero);  //Se a divisão não tiver resto, esse número primo será impresso em seguida do "x"
            n = n / numero;           // Atualização da variável N para que possa seguir a decomposição
            multip = multip * numero; //Conferência dos valores até agora encontrados para saber se sua multiplicação será igual a n
        }
        else
        {
            numero++; //Se a divisão não for exata, o número aumenta;
        }
    }
}