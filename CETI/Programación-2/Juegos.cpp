//
// Created by jesus on 21/03/2024.
//

#include "Juegos.h"
#include <stdlib.h>
#include <stdio.h>

void Juegos::adivinaNumero() {
    int n1, n2, r1, r2;
    int n;
    printf("El primer niño escriba el numero que piensa del 1 al 100: ");
    fflush(stdout);
    scanf("%d", &n1);

    printf("El segundo niño escriba el numero que piensa del 1 al 100: ");
    fflush(stdout);
    scanf("%d", &n2);

    while (true){

        printf("El primer nino intente adivinar el numero:");
        fflush(stdout);
        scanf("%d", &r1);

        printf("El segundo nino intente adivinar el numero:");
        fflush(stdout);
        scanf("%d", &r2);

        if (r1 == n2 && r2 == n1){
            printf("Hubo un empate!");
            break;
        }
        if (r1 == n2){
            printf("Gano el primer nino!");
            break;
        }
        if (r2 == n1){
            printf("Gano el primer nino!");
            break;
        }

        fflush(stdin);

        // Primero
        if (r1 > n2){
            printf("El numero del primer nino es mayor\n");
            fflush(stdout);
        }
        if (r1 < n2){
            printf("El numero del primer nino es menor\n");
            fflush(stdout);
        }
        // Segundo
        if (r2 > n1){
            printf("El numero del segundo nino es mayor\n");
            fflush(stdout);
        }
        if (r2 < n1){
            printf("El numero del segundo nino es menor\n");
            fflush(stdout);
        }

        fflush(stdin);
    }
}

void Juegos::Boliche() {
    int puntos=0, pinos_d=0;
    int strike_bonus=0, spare_bonus=0;

    for(int i=0; i<10; i++){
        int pinos=10;

        printf("Ronda %d:\n", i+1);

        printf("1 Lanzamiento - Ingrese la cantidad de pinos derribados:");
        fflush(stdout);
        scanf("%d", &pinos_d);

        pinos -= pinos_d;

        if (spare_bonus){
            puntos += 10-pinos + spare_bonus;
            printf("pinos: %d, spare: %d, puntos: %d\n", pinos, spare_bonus, puntos);
        }

        if (pinos > 0){
            printf("2 Lanzamiento - Ingrese la cantidad de pinos derribados:");
            fflush(stdout);
            scanf("%d", &pinos_d);

            pinos -= pinos_d;
        }
        else{
            // Strike
            strike_bonus += 10;
            printf("Strike!\n\n");
            continue;
        }

        if (!pinos){
            // Spare
            spare_bonus += 10;
            printf("Spare!\n\n");
            continue;
        }

        if (strike_bonus){
            puntos += 10-pinos + strike_bonus;
        }

        puntos += 10-pinos;

        strike_bonus=0;
        spare_bonus=0;
        printf("Puntos: %d\n\n", puntos);
    }

    printf("La cantidad de puntos es: %d", puntos);
}