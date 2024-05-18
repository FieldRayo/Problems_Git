//
// Created by jesus on 01/05/2024.
//

#include "Negocios.h"


float Negocios::ImportesVenta(int n_prod, int n_venta) {
    float precio;

    switch (n_prod) {
        case 1: precio=2.98; break;
        case 2: precio=5.5; break;
        case 3: precio=9.98; break;
        case 4: precio=4.49; break;
        case 5: precio=6.87; break;
    }

    return precio*n_venta;
}