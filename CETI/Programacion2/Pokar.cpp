#include "Pokar.h"
#include <iostream>
#include <iterator>

void Pokar::Desplegar(){
  for(int c: mazo)
    DesplegarCarta(c);
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

void Pokar::DesplegarCarta(int carta){
  DesplegarValor(Valor(carta));
  printf(" de ");
  DesplegarPalo(Palo(carta));
  printf("\n");
}

void Pokar::DesplegarPalo(int palo){
  switch(palo){
    case 0:
      printf("corazones"); break;
    case 1:
      printf("picas"); break;
    case 2:
      printf("diamantes"); break; 
    case 3:
      printf("trevoles"); break;
     }
  }
void Pokar::DesplegarValor(int valor){
  switch(valor){
    case 0:
      printf("as"); break;
    case 1:
      printf("dos"); break;
    case 2:
      printf("tres"); break; 
    case 3:
      printf("cuatro"); break;
    case 4:
      printf("cinco"); break;
    case 5:
      printf("seis"); break; 
    case 6:
      printf("siete"); break;
    case 7:
      printf("ocho"); break;
    case 8:
      printf("nueve"); break;
    case 9:
      printf("diez"); break;
    case 10:
      printf("jack"); break;
    case 11:
      printf("once"); break;
    case 12:
      printf("doce"); break;
    case 13:
      printf("rey"); break;
  }
}

int Pokar::Palo(int carta){
  return (carta / 13) % 4;
}

int Pokar::Valor(int carta){
  return carta % 13;
}

void Pokar::NuevaMano(int mano[]){
  for(int i=0; i<5; i++)
    mano[i] = Valor(mazo[i]);
}

bool Pokar::Par(int arr[]){
  int cartas_iguales=0;
  
  // Recorrer el arreglo y comprueba si hay un valor que se repita, si ese es el caso
  for(int i=0; i<5; i++){
    printf("%d\n", arr[i]);
    for(int j=i+1; j<5; j++){
      if (arr[j] == arr[i])
        cartas_iguales++;
    }
  }
  
  // Solamente si hay 1 solo par regresa verdadero
  if (cartas_iguales == 1)
    return true;

  return false;
}

