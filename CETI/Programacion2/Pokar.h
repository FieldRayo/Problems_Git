#ifndef POKAR_H
#define POKAR_H

#define NUMCARTAS 52
#define BARAJAS 6

class Pokar{
  private:
    int mazo[NUMCARTAS];
  public:
    void Barajear();
    bool BuscarDato(int n);
    void Desplegar();
    void DesplegarPalo(int palo);
    void DesplegarValor(int valor);
    void DesplegarCarta(int carta);
    void NuevaMano();
    int Palo(int carta);
    int Valor(int carta);
};

#endif // POKAR_H
