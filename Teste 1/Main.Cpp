#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1;
    int nota2;

    printf("Digite a nota 1 \n");
    scanf("%d", &nota1);
    fflush(stdin);

    printf("\nDigite a nota 2 \n");
    scanf("%d", &nota2);
    fflush(stdin);

    printf("A media da soma 1 e soma 2 e: %d", (nota1 + nota2) / 2);

    return 0;
}