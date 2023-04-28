#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void questao01(void){
    float raio, diametro, perimetro, area, volume;

    entrada01( &raio);

    processamento01( &raio, &area, &diametro, &perimetro, &volume);

    saida01( &area, &diametro, &perimetro, &volume);
}

void entrada01(float *ra){
    printf("Informe o valor da raio de um circulo: ");
    scanf("%f", ra);
}

void processamento01(float *ra, float *ar, float *dia, float *per, float *vol){
    *dia = 2 * *ra;
    *per = (2 * 3.14) * *ra;
    *ar = 3.14 * ( *ra * *ra);
    *vol = ((4 * 3.14) * ( *ra * *ra * *ra)) / 3;
}

void saida01(float *ar, float *dia, float *per, float *vol){
    printf("Diametro: %.1f\n", *dia);
    printf("Perimetro: %.1f\n", *per);
    printf("Area: %.1f\n", *ar);
    printf("Volume: %.1f", *vol);
}
