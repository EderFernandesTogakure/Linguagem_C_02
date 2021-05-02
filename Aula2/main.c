#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int num = 10;
    int soma = num + 1;
    char letra;
    float real;
    printf("Constante %d \n", num);
    printf("Soma %d \n", soma);
    //num = 12; valor constante não pode ser mudado
    soma = 15; //Pode ser mudado no decorrer do programa
    printf("O novo valor de soma e %d \n", soma);
    printf("Digite uma letra e um numero de ponto flutuante \n");
    scanf("%c %f", &letra, &real);
    printf("A letra e %c e o numero flutuante %.2f \n", letra, real);
}
