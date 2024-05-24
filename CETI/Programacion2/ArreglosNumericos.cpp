//
// Created by jesus on 10/05/2024.
//

#include "ArreglosNumericos.h"
#include <iostream>
void ArreglosNumericos::PedirDatos() {
    for (int i=0; i<ARRSIZE; i++){
        printf("Ingrese el dato: %d\n>>>", i);
        fflush(stdout);
        scanf("%d", &arr[i]);
    }
}

void ArreglosNumericos::MostrarDatos() {
    for (int i=0; i<ARRSIZE; i++)
        printf("Ingrese el dato: %d\n>>>", arr[i]);
}

void ArreglosNumericos::TresMayor(int *n1, int *n2, int *n3) {
    for(int n: arr){
        if(n > *n1){
            *n3 = *n2;
            *n2 = *n1;
            *n1 = n;
        }
        else if (n > *n2) {
            *n3 = *n2;
            *n2 = n;
        }
        else if (n > *n3)
            *n3 = n;
    }
}

void ArreglosNumericos::FactoresArr(int n){
    int factores[n/2];
    int indice=0;
    for(int i=1; i<= n/2; i++){
        if (n % i == 0)
            factores[indice++] = i;
    }
    
    factores[indice++] = n;

    DesplegarFactores(factores, n);
}

void ArreglosNumericos::DesplegarFactores(int factores[], int n){
    for(int i=0; factores[i] <= n; i++){
        printf("%d\t", factores[i]);
    }
}
