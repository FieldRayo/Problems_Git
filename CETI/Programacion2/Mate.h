//
// Created by jesus on 22/02/2024.
//

#ifndef UNTITLED_MATE_H
#define UNTITLED_MATE_H


class Mate {
public:
    double PerimteroCirculo(double radio);
    double AreaCirculo(double radio);
    void CalcularIVA(double valor, double *importe, double *valorImporte);
    bool TanX(double co, double ca, double* tan);
    bool CosX(double ca, double h, double* cos);
    int Triangulos(float l1, float l2, float l3);
    bool AreaXSemiperimetro(double a, double b, double c, double *area);
    float abs(float num);
    bool VMultiplo(int n1, int n2);
    int contadorPos();
    void Factores(int n);
    void ParesRango(int n);
    bool Es_primo(int n);
    double CalcularPi(int n);
    void EvenOrOdd();
    int ContadorCifras(int n);
    void DesplegarDatos(int n_datos, int *max, int *min, int *sum);
    void CalcularPromedio(float *promedio);
    void TresRangos();
    void Boliche();
    void ResultadosCurso(int *aprobados, int *reprobados, float *promedio);
    unsigned long long factorial(int n);
    long double serieE(int n);
};


#endif //UNTITLED_MATE_H
