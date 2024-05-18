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
