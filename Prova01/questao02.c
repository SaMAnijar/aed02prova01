#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void questao02(void){
    float salariobruto, salarioliquido;

    entrada02( &salariobruto);

    processamento02( &salariobruto, &salarioliquido);

    saida02( &salarioliquido);
}

void entrada02(float *salb){
    printf("Informe o salario bruto: R$");
    scanf("%f", salb);
}

void processamento02(float *salb, float *sallq){
    if(*salb >= 2000){
        *sallq = *salb - (*salb * 0.2);
    }else{
        *sallq = *salb - (*salb * 0.1);
    }
}

void saida02(float *sallq){
    printf("O salario liquido eh: %.2f\n", *sallq);
}
