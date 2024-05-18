#include <math.h>
#include "Mate.h"
#include <iostream>

double Mate::AreaCirculo(double radio) {
    return M_PI * pow(radio, 2);
}

double Mate::PerimteroCirculo(double radio) {
    return M_PI * 2 * radio;
}

void Mate::CalcularIVA(double valor, double *importe, double *valorImporte) {
    *importe = valor * 0.15;
    *valorImporte = valor * 1.15;
}

bool Mate::TanX(double co, double ca, double* tan)
{
    if(ca == 0)
        return false;
    *tan = co / ca;
    return true;
}

bool Mate::CosX(double ca, double h, double *cos) {
    if(h == 0)
        return false;

    *cos = ca / h;
    return true;
}

int Mate::Triangulos(float l1, float l2, float l3) {

    if (!l1*l2*l3) return 0;
    if (l1+l2 < l3 || l1+l3 < l2 || l2+l3 < l1) return 0;

    if (l1 == l2 && l2 == l3) return 1;
    if (l1 == l2 || l2 == l3 || l3 == l1) return 2;

    return 3;
}

bool Mate::AreaXSemiperimetro(double a, double b, double c, double *area) {
    if (!Triangulos(a, b, c))
        return false;

    double p = (a+b+c) / 2.0;
    *area = sqrt(p * (p-a) * (p-b) * (p-c));
    return true;
}

float Mate::abs(float num) {
    return (num < 0) ? -num : num;
}

bool Mate::VMultiplo(int n1, int n2) {
    return !(n2 % n1);
}

int Mate::contadorPos(){
    int num, n=0;

    for(int i=0; i < 5; i++) {
        printf("Ingrese el numero %d:", i);
        fflush(stdout);
        scanf("%d", &num);

        if (num >= 0)
            n++;
    }

    return n;
}

void Mate::Factores(int n) {
    for(int i=1; i<=n/2; i++){
        if (n % i == 0)
            printf("%d\n", i);
    }
    printf("%d\n", n);
}

void Mate::ParesRango(int n) {
    // En caso de ser impar sumar 1
    n = (n%2==1) ? n+1 : n;
    // En caso de estar fuera de rango ajusta el valor al limite mas cercano
    n = (n<100) ? 100 : (n>200) ? 200 : n;

    for(int i=n; i<=200; i+=2){
        printf("%d\n", i);
    }
}

bool Mate::Es_primo(int n){
    bool es_primo = true;

    if (n==1)
        return true;

    for(int i=2; i<= n/2; i++){
        if (n % i == 0)
            es_primo = false;
    }

    return es_primo;
}

double Mate::CalcularPi(int n) {
    double sum=0;
    bool aux=false;

    for(int i=1; i<=n; i+=2){
        printf("%lf\n", sum);
        if (aux){
            sum -= (double)4/i;
            aux = false;
        }
        else{
            sum += (double)4/i;
            aux=true;
        }
    }

    return sum;
}

void Mate::EvenOrOdd() {
    int x;
    for (int i=0; i<10; i++){
        printf("%d - Ingrese un numero entero:", i);
        fflush(stdout);
        scanf("%d", &x);

        if(x%2)
            printf("Es impar\n");
        else
            printf("Es par\n");

        fflush(stdin);
    }
}

int Mate::ContadorCifras(int n) {
    int contador = 0;
    while(n){
        n /= 10;
        contador++;
    }

    return contador;
}

void Mate::DesplegarDatos(int n_datos, int *max, int *min, int *sum) {
    int dato;

    for(int i=0; i<n_datos; i++){
        printf("Ingrese el dato numero %d:", i);
        fflush(stdout);
        scanf("%d", &dato);

        if (!i)
            *min = dato;

        if (dato > *max)
            *max = dato;
        if (dato < *min)
            *min = dato;

        *sum = *sum + dato;

        fflush(stdin);
    }
}

void Mate::CalcularPromedio(float *promedio) {
    int dato, suma=0, i=0;
    while(dato){
        printf("Ingrese un numero: ");
        fflush(stdout);
        scanf("%d", &dato);
        suma += dato;
        i++;
    }
    *promedio = (float)suma/(i-1);
}

void Mate::TresRangos() {
    int dato, a=0, b=0, c=0;

    for(int i=0; i<30; i++){
        printf("Ingrese un digito: ");
        fflush(stdout);
        scanf("%d", &dato);

        if(dato < 15)
            a++;
        if(dato >= 25 && dato <= 45)
            b++;
        if(dato > 50)
            c++;
    }

    printf("La cantidad de numeros menores a 15: %d, entre 25 y 45: %d, mayores a 50: %d", a, b, c);
}

void Mate::Boliche() {
    int puntos=0, pinos_d=0;
    int strike_bonus=0, spare_bonus=0;

    for(int i=0; i<10; i++){
        int pinos=10;

        printf("Ronda %d:\n", i+1);

        printf("1 Lanzamiento - Ingrese la cantidad de pinos derribados:");
        fflush(stdout);
        scanf("%d", &pinos_d);

        pinos -= pinos_d;

        if (spare_bonus){
            puntos += 10-pinos + spare_bonus;
            printf("pinos: %d, spare: %d, puntos: %d\n", pinos, spare_bonus, puntos);
        }

        if (pinos > 0){
            printf("2 Lanzamiento - Ingrese la cantidad de pinos derribados:");
            fflush(stdout);
            scanf("%d", &pinos_d);

            pinos -= pinos_d;
        }
        else{
            // Strike
            strike_bonus += 10;
            printf("Strike!\n\n");
            continue;
        }

        if (!pinos){
            // Spare
            spare_bonus += 10;
            printf("Spare!\n\n");
            continue;
        }

        if (strike_bonus){
            puntos += 10-pinos + strike_bonus;
        }

        puntos += 10-pinos;

        strike_bonus=0;
        spare_bonus=0;
        printf("Puntos: %d\n\n", puntos);
    }

    printf("La cantidad de puntos es: %d", puntos);
}

void Mate::ResultadosCurso(int *aprobados, int *reprobados, float *promedio) {
    int n, suma=0;
    printf("Ingrese la cantidad de alumnos:");
    fflush(stdout);
    scanf("%d", &n);


    for(int i=0; i<n; i++){
        int calif;
        printf("Ingrese la calificacion del alumno: %d:", i+1);
        fflush(stdout);
        scanf("%d", &calif);

        if(calif >= 70)
            *aprobados = *aprobados + 1;
        else
            *reprobados = *reprobados + 1;

        suma += calif;
    }

    *promedio = (float)suma/n;
}

long double Mate::serieE(int n) {
    long double e=0;
    for (int i = 0; i < n; i++) {
        e += (long double)1 / factorial(i);
        std::cout << e << std::endl;
    }

    return e;
}

unsigned long long Mate::factorial(int n){
    unsigned long long int fact=1;
    for(int i=n; i>0; i--)
        fact *= i;
    return fact;
}