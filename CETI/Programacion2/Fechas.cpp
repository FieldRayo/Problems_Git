//
// Created by jesus on 15/02/2024.
//

#include "Fechas.h"

int Fechas::getYear(int date) {
    int year = date / 10000;
    return year;
}

int Fechas::getMonth(int date) {
    int month = date % 10000 / 100;
    return month;
}

int Fechas::getDay(int date) {
    int day = date % 100;
    return day;
}

bool Fechas::esBisiesto(int date) {
    return (!date%4 && (date <= 1582 || (date%100 && date%400))) ? true : false;
}