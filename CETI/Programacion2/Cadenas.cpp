#include <iostream>

#include "Cadenas.h"

void Cadenas::ImprimirCadena(char cad[]){
  for(int i=0; cad[i] != '\n'; i++)
    std::cout << cad[i];
}

void Cadenas::CadToAltas(char cad[]){
  for(char *c=cad; *c != '\n'; c++){
    *c = (*c>='a' || *c<='z') ? *c-32 : *c;
  }
}

bool is_vowel(char c){
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void Cadenas::Vocales(char cad[], int *count){
  // Se le pasa a la funcion la cadena en donde va a buscar las vocales y el contador de vocales
  // En el for se crea la variable apuntador 'c' que es igual al primer elemento de la cadena
  // Despues crea la condicion para que el for se termine en cuando haya un enter
  // Al valor del contador es igual al valor del contador mas el resultado de la funcion 'is_vowel' 0 o 1 (falso o verdadero)
  // Se le suma uno a la direccion de c, esto hace que avanse una posicion en cadena;
  for(char *c=cad; *c != '\n'; *count = *count + is_vowel(*c), c++);
}


