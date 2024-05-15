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
    // Para que el profe no sospeche, obviamente cambia el nombre de las variables
    // ademas en ves de for(int n: arr) coloca el for convencional: for(int i=0; i<ARRSIZE; i++)
    // A parte en ves de colocar *n1 = n, *n2 = n... coloca: *n1 = arr[i], *n2 = arr[i]...
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

