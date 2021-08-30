#include <stdio.h>

void main()
{
    float peso, altura, imc, quadrado, diferenca1, diferenca2, perda, ganho;
    printf("Digite seu peso(em kg) e altura (em metros), respectivamente:\n");
    scanf("%f%f", &peso, &altura);
    quadrado = altura * altura;    // A biblioteca math causa alguns bugs no meu programa, então optei por usar esse método
    imc = peso / quadrado;         // O IMC é calculado conforme o que foi orientado na questão
    diferenca1 = 18 - imc;         // A diferença2 será usada caso o IMC seja menor que 18
    diferenca2 = imc - 25;         // A diferenca2 será usada caso o IMC seja maior que 25
    perda = diferenca2 * quadrado; // Total a ser perdido caso IMC > 25
    ganho = diferenca1 * quadrado; // Total a ser ganho caso o IMC < 18

    if (imc < 18)
    {
        printf("Abaixo do peso e deve ganhar %2.2f kg \n", ganho);
    }
    else if (imc >= 18 && imc <= 25)
    {
        printf("Dentro da faixa de peso adequada\n");
    }
    else
    {
        printf("Acima do peso e deve perder %2.2f kg \n", perda);
    }
}