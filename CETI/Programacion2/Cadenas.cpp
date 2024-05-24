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
  // c = (c >= 'A' && c <= 'Z') ? c-=32 : c;

  c = tolower(c);
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void Cadenas::Vocales(char cad[], int *count){
  for(char *c=cad; *c != '\n'; *count = *count + is_vowel(*c), c++);

  /*
  for (int i=0; cad[i] != '\n'; i++){
    int c = cad[i];
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
      *contador = *contador + 1;
  }
  */
}


