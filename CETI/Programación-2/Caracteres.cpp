//
// Created by jesus on 29/02/2024.
//

#include "Caracteres.h"
#include <cstdlib>

bool Caracteres::OrdenCaracteres(char car1, char car2) {
    return (car1 <= car2) ? true : false;
}

bool Caracteres::CaracterRespecto_IM(char caracter) {
    if (caracter < 'a') caracter += 32;
    return (caracter >= 'i' && caracter <= 'm') ? true : false;
}
