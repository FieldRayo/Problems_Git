#ifndef POKAR_H
#define POKAR_H

#define NUMCARTAS 52

class Pokar{
  private:
    int mazo[NUMCARTAS];
  public:
    void Barajear();
    bool BuscarDato(int n);
    void Desplegar();
};

#endif // POKAR_H
