#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tiposFuncoes.h"
#include "double_t.h"
#include "integer_t.h"

int main (){

    double a=5.0,b=6.0;
    void * vet[2];
    void * ptc;
    void * ptd = NULL;
    void *soma = NULL;
    void *subtracao = NULL;
    void *divisao = NULL;
    void *multiplicacao = NULL;
    void *eleQuad = NULL;
    void *raiz =NULL;
    
    vet[0] = Double_criar_vals (&a, malloc);
    vet[1] = Double_criar_vals (&b, malloc);
    
    ptc = Double_criar_zero (malloc);
    ptd = Double_criar_copiar (ptc, malloc, memcpy);
    
    printf ("vet[0] = %lf \n", Double_get(vet[0]));
    printf ("vet[1] = %lf \n", Double_get(vet[1]));
    printf (" ptc = %lf \n", Double_get(ptc));
    printf (" ptd = %lf \n", Double_get(ptd));
    Double_set (ptc, &a);
    Double_set (ptd, &b);
    printf ("\nAtribuindo 7.0 e 8.0 a ptc e ptd...\n");
    printf (" ptc = %lf \n", Double_get(ptc));
    printf (" ptd = %lf \n", Double_get(ptd));
    
    printf("\nSomando ptc e ptd...\n");
    soma = Double_criar_zero (malloc);
    soma = Double_somar (ptc, ptd, soma);
    printf ("Soma = %lf \n", Double_get(soma));
    
    printf("\nSubtraindo ptc e ptd...\n");
    subtracao = Double_criar_zero (malloc);
    subtracao = Double_subtrair (ptc, ptd, subtracao);
    printf ("Subtracao = %lf \n", Double_get(subtracao));

    printf("\nDividindo ptc e ptd...\n");
    divisao = Double_criar_zero (malloc);
    divisao = Double_dividir(ptc, ptd, divisao);
    printf ("Divisao = %lf \n", Double_get(divisao));

    printf("\nMultiplicando ptc e ptd...\n");
    multiplicacao = Double_criar_zero (malloc);
    multiplicacao = Double_multiplicar (ptc, ptd, multiplicacao);
    printf ("Multiplicacao = %lf \n", Double_get(multiplicacao));

    printf("\nElevando ptc ao quadrado...\n");
    eleQuad = Double_criar_zero (malloc);
    eleQuad = Double_elevaAoQuadrado (ptc, eleQuad);
    printf ("Quadrado = %lf \n", Double_get(eleQuad));

    printf("\nTirando a raiz de ptc...\n");
    raiz = Double_criar_zero (malloc);
    raiz = Double_raizQuadrada(ptc, raiz);
    printf ("Raiz = %lf \n", Double_get(raiz));

    
    Double_destruir( vet[0], free);
    Double_destruir( vet[1], free);
    Double_destruir( ptc, free);
    Double_destruir( ptd, free);
    Double_destruir( soma, free);
    Double_destruir( subtracao, free);
    Double_destruir( divisao, free);
    Double_destruir( multiplicacao, free);
    Double_destruir( eleQuad, free);
    Double_destruir( raiz, free);
    exit(0);
}
