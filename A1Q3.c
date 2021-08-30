#include <stdio.h>

void main()
{
    int div, num, resto, bits = 0;
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d", &num);
    while (div != 0) // a divisão por 2 continuará enquanto o div não for zero
    {
        div = num / 2; //A cada divisão por 2, aumenta um bit, por se tratar de número binário
        num = div;
        bits++;
    }
    printf("%d", bits);
}