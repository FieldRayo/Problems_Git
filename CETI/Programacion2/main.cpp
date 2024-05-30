#include<cstdio>
#include<iostream>

#include "Converciones.h"
#include "Fechas.h"
#include "Mate.h"
#include "Caracteres.h"
#include "Juegos.h"
#include "Negocios.h"
#include "ArreglosNumericos.h"
#include "Pokar.h"
#include "Cadenas.h"

using namespace std;
int main(int argc, char** argv) {
    Converciones conv;
    Fechas fechas;
    Mate mat;
    Caracteres car;
    Juegos j;
    Negocios neg;
    ArreglosNumericos an;
    Pokar pk;
    Cadenas cads;
/*
 *  Convs, Areas
 *
    double value, result;
    int option;

    printf("- Converciones -\n1 - LibrasAKilogramos\n2 - KilometrosAMillas\n3 - Farenheit\n\n- Fechas -\n4 - Anio\n5 - Mes\n6 - Dia\n\n- Mate - \n7 - PerimetroCirculo\n8 - AreaCirculo\n>>> ");
    fflush(stdin);
    std::cin >> option;

    printf("Ingrese un valor: ");
    fflush(stdin);
    scanf("%lf", &value);

    switch (option) {
        case 1: result = conv.LibrasAKilogramos(value); break;
        case 2: result = conv.KilometrosAMillas(value); break;
        case 3: result = conv.FarenheitACelcius(value); break;
        case 4: result = fechas.getYear(value); break;
        case 5: result = fechas.getMonth(value); break;
        case 6: result = fechas.getDay(value); break;
        case 7: result = mat.PerimteroCirculo(value); break;
        case 8: result = mat.AreaCirculo(value);
    }

    printf("El resultado es: %lf", result);
*/

/*
 *  IVA
 *
    double valor, importe, valorImporte;

    printf("Ingrese el importe: ");
    fflush(stdin);
    scanf("%lf", &valor);
    mat.CalcularIVA(valor, &importe, &valorImporte);

    printf("Precio: %lf, Importe: %lf, Valor con importe: %lf", valor, importe, valorImporte);

*/

/*
 * Coseno
 *
    double ca, h, cos;

    printf("Ingrese el valor del cateto adyacente: ");
    fflush(stdout);
    scanf("%lf", &ca);

    printf("Ingrese el valor de la hipotenusa: ");
    fflush(stdout);
    scanf("%lf", &h);

    if (mat.CosX(ca, h, &cos))
        printf("El coseno es de: %lf", cos);
    else
        printf("La hipotenusa no puede ser 0!!!");

    */

    /*
     * OrdenaCaracteres
     *
    char car1, car2;

    printf("Ingrese un caracter:");
    fflush(stdout);
    scanf("%c", car1);

    printf("Ingrese otro caracter:");
    fflush(stdout);
    scanf("%c", car2);

    if(c.OrdenCaracteres(car1, car2))
        printf("Esta en orden");
    else
        printf("No esta en orden");

    */

    /*
    // Caracter Respecto a I y M
    char caracter;

    printf("Ingrese un caracter:", caracter);
    fflush(stdout);
    scanf("%c", &caracter);

    if (c.CaracterRespecto_IM(caracter))
        printf("El caracter esta dentro de I-M");
    else
        printf("El caracter no esta dentro del rango I-M");

    */

    /*
    // Bisiesto

    int fecha;

    printf("Ingrese un año:");
    fflush(stdout);
    scanf("%d", &fecha);

    if (fechas.esBisiesto(fecha))
        printf("Es bisiesto");
    else
        printf("No es bisiesto");
    */

    // Triangulos
    /*
    float l1, l2, l3;
    int tipoDeTriangulo;

    printf("Ingrese el lado 1:");
    fflush(stdout);
    scanf("%f", &l1);

    printf("Ingrese el lado 2:");
    fflush(stdout);
    scanf("%f", &l2);

    printf("Ingrese el lado 3:");
    fflush(stdout);
    scanf("%f", &l3);

    tipoDeTriangulo = mat.Triangulos(l1, l2, l3);

    printf("El tipo de lado es: %d", tipoDeTriangulo);
     */

    /*
    // Area X del Semi perimetro
    double a, b, c;
    double area;

    printf("Ingrese el lado 'a':");
    fflush(stdout);
    scanf("%lf", &a);

    printf("Ingrese el lado 'b':");
    fflush(stdout);
    scanf("%lf", &b);

    printf("Ingrese el lado 'c':");
    fflush(stdout);
    scanf("%lf", &c);

    if (mat.AreaXSemiperimetro(a, b, c, &area))
        printf("El area del semiperimetro es: %lf", area);
    else
        printf("No se puede contruir un triangulo con esos lados!");
    */

    // VMultiplo

    /*
    int n1, n2;

    printf("Escriba un numero: ");
    fflush(stdout);
    scanf("%d", &n1);

    printf("Escriba otro numero:");
    fflush(stdout);
    scanf("%d", &n2);

    if (mat.VMultiplo(n1, n2)){
        printf("El primero es multiplo del segundo");
    }else{
        printf("No son multiplos");
    }
    */

    /*
    // Valor absoluto

    float num;

    printf("Escribe un numero:");
    fflush(stdout);
    scanf("%lf", &num);

    num = mat.abs(num);

    printf("El valor absoluto es: %lf", num);

    return 0;
*/
/*
    // Positivo de 20 numeros
    int n = mat.contadorPos();
    printf("Hay %d positivos", n);
*/
/*
    // Adivinar numeros

    j.adivinaNumero();
*/

/*
// Factores
    int n;

    printf("Dame un numero:");
    fflush(stdout);
    scanf("%d", &n);

    mat.Factores(n);
*/


/*
// Pares Rango

    int n;

    printf("Ingrese un valor entre 100 y 200:");
    fflush(stdout);
    scanf("%d", &n);

    mat.ParesRango(n);
 */
/*
// Calcular PI

    int n;
    double pi;

    printf("Especifique precision de pi (cantidad de operaciones): ");
    fflush(stdout);
    scanf("%d", &n);

    pi = mat.CalcularPi(n);

    printf("%lf", pi);
*/
// Par o impar
/*
    mat.EvenOrOdd();
 */

/*
// Contador de cifras

    int n;
    printf("Digite un numero: ");
    fflush(stdout);
    scanf("%d", &n);

    int contador = mat.ContadorCifras(n);
    printf("%d", contador);

    */
/*
// Despliegue de datos
    int n_datos, max=0, min=0, sum=0;

    printf("Ingrese la cantidad de datos: ");
    fflush(stdout);
    scanf("%d", &n_datos);

    mat.DesplegarDatos(n_datos, &max, &min, &sum);

    printf("El maximo es %d, el minimo es %d, la suma es %d y el promedio es %f", max, min, sum, (float)sum/n_datos);
    */

/*
 // Calcular Promedio
    float promedio;
    mat.CalcularPromedio(&promedio);
    printf("El promedio es: %f", promedio);
    */
/*
// Tres Rangos
    mat.TresRangos();
    */


/*
// Boliche
    mat.Boliche();
    */
/*
// ImporteVenta
    int n_prod, n_venta;
    float importe_total, importe_por_semana=0;

    for (int i=0; i<7; i++) {
        printf("Ingrese el numero del producto:");
        fflush(stdout);
        scanf("%d", &n_prod);

        printf("Ingrese La cantidad vendida:");
        fflush(stdout);
        scanf("%d", &n_venta);

        importe_total = neg.ImportesVenta(n_prod, n_venta);
        importe_por_semana += importe_total;

        printf("\nLa cantidad vendida hoy es de: $%f\n\n", importe_total);
        fflush(stdin);
    }

    printf("\bLa cantidad vendida por semana es de: $%f\n", importe_por_semana);
*/
/*
    // Examen
    int aprobados=0, reprobados=0;
    float promedio;

    mat.ResultadosCurso(&aprobados, &reprobados, &promedio);

    printf("Aprobados: %d\nReprobados: %d\nPromedio: %f", aprobados, reprobados, promedio);

*/

/*
    // Serie E
    int n;
    double long e;
    printf("Ingrese la cantidad de for");
    fflush(stdout);
    scanf("%d", &n);

    e = mat.serieE(n);
    std::cout << e;
*/

/*
    // Tres mayor
    int n1=0, n2=0, n3=0;
    an.PedirDatos();
    an.TresMayor(&n1, &n2, &n3);

    printf("Los 3 mayores son: %d, %d, %d", n1, n2, n3);

*/

/*
    // Barajear
    pk.Barajear();
    pk.NuevaMano();
*/

/*
    // Only Upper
    char cad[100];
    
    printf("Ingresa una cadena: ");
    fgets(cad, 100, stdin);

    cads.CadToAltas(cad);
    cads.ImprimirCadena(cad);
    return 0;
 */

/*
    // Vocales
    char cad[100];
    int count=0;

    printf("Ingrese una cadena: ");
    fgets(cad, 100, stdin);

    cads.Vocales(cad, &count);
    printf("la cantidad de vocales es: %d", count);
*/

/*
    // Factores
    int n=28;
    an.FactoresArr(n);
*/
    // Par
    int mano[5];
    pk.Barajear();
    pk.NuevaMano(mano);
    if (pk.Par(mano)){
        printf("Hay dos cartas iguales\n");
    }else{
        printf("No hay cartas iguales\n");
    }
}

