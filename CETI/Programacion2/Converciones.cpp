#include "Converciones.h"

double Converciones::LibrasAKilogramos(double libras){
    double kilogramo = libras * 0.453592;
    return kilogramo;
}

double Converciones::KilometrosAMillas(double kms){
    double millas = kms / 1.609;
    return millas;
}

double Converciones::FarenheitACelcius(double farenh) {
    double celcius = (farenh - 32) * (5.0/9.0);
    return celcius;
}