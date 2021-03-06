Implemente um TAD NumeroComplexo. Cada número possui os campos real e imaginário. Implemente as
operações:
a) Atribui: atribui valores para os campos
b) Imprime: imprime o número da forma “R + Ci”
c) Copia: Copia o valor de um número para outro
d) Soma: Soma dois números complexos
Faça um pequeno programa para testar o seu TAD.

#include <stdlib.h>
#include <stdio.h>
#include "NumeroComplexo.h"

int main() {
    NumeroComplexo* n1 = cria_numero();
    NumeroComplexo* n2 = cria_numero();
    NumeroComplexo* n3 = cria_numero();

    NumeroComplexo* n_soma;

    atribui_numero(n1, 4.5, 3);
    atribui_numero(n2, 5, 2);
    atribui_numero(n3, 8, 6);


    imprime_numero(n1);
    imprime_numero(n2);
    imprime_numero(n3);

    copia_numero(n1, n3);
    n_soma = soma(n1, n2);

    printf("\n\tSegundo Print\n");

    imprime_numero(n1);
    imprime_numero(n2);
    imprime_numero(n3);
    printf("\nSoma:");
    imprime_numero(n_soma);

    libera_numero(n1);
    libera_numero(n2);
    libera_numero(n3);

    return 0;
}