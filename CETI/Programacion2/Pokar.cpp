#include "Pokar.h"
#include <iostream>
#include <iterator>

void Pokar::Desplegar(){
  for(int c: mazo)
    printf("%d\t", c);
}

bool Pokar::BuscarDato(int n){
  for(int c: mazo){
    if(n == c)
      return true;
  }

  return false;
}

void Pokar::Barajear(){
  srand(time(0));
  int random = rand() % NUMCARTAS;

  // Este tipo de for lo que hace es recorrer uno por uno todo el mazo sin la necesidad de tener una variable que actue como indice ('i')
  // Adicionalmente en este for le agrege en & despues de el tipo de dato para que NO se cree una copia del valor y de esta manera
  // Si modifico 'c' tambien modifico el valor de mazo, lo cual equibaldria a: mazo[i] = random;
  for(int& c: mazo){
    while(BuscarDato(random))
      random = rand() % NUMCARTAS;
    c = random;
  }
}
