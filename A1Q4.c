#include <stdio.h>

void main()
{
    int i = 0, enesimo, num = 2, contador, primo = 0;

    printf("Digite o numero e encontraremos o enesimo numero primo:\n");
    scanf("%d", &enesimo);
    while (primo < enesimo)
    {
        int div2 = 0;
        for (int k = 1; k <= num; k++)
        {
            contador = num % k; // Divisão para saber por quais números o valor é divisível
            if (contador == 0)
            {
                div2++; // Se o resto da divisão for zero, o número terá um divisor contado
            }
        }
        if (div2 == 2) //Conferindo se o número é primo, caso seja, a variável recebe mais um
        {
            primo = primo + 1;
        }
        num++;
    }
    printf("%d", num - 1);
}