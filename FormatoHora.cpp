//
// Created by el_me on 26/02/2018.
//

#include <cmath>
#include "FormatoHora.h"

FormatoHora::FormatoHora(int h, int m, int s) {
    this->horas=h;
    this->minutos=m;
    this->segundos=s;
}

FormatoHora operator+ (const FormatoHora &h1, const FormatoHora &h2) {
        int resultadoA = (h2.segundos + h1.segundos);
        int resultadoB = (h2.minutos + h1.minutos);
        int resultadoC = (h2.horas + h1.horas);

    if(resultadoA >= 60){
        resultadoB++;
        resultadoA = resultadoA -60;
    }if(resultadoB >= 60){
        resultadoC++;
        resultadoB = resultadoB -60;
    }
        FormatoHora resultado = *new FormatoHora(resultadoC, resultadoB, resultadoA);
        return resultado;
    }
FormatoHora operator- (const FormatoHora &h1, const FormatoHora &h2) {
    int resultadoA = fabs(h2.segundos - h1.segundos);
    int resultadoB = fabs(h2.minutos - h1.minutos);
    int resultadoC = fabs(h2.horas - h1.horas);

    if(resultadoA >= 60){
        resultadoB++;
        resultadoA = resultadoA -60;
    }if(resultadoB >= 60){
        resultadoC++;
        resultadoB = resultadoB -60;
    }
    FormatoHora resultado = *new FormatoHora(resultadoC, resultadoB, resultadoA);
    return resultado;
}

/*
bool FormatoHora::validaHrs(FormatoHora) {
    bool horaCorrecta = true;
    if(horas>=0 && horas<=23){
        bool horacorrecta=true;
    }else if (horas<0 || horas>23){
        bool horacorrecta=false;
    }
    if(h2.minutos ){
        horafin= horafin-1;
        minfin= minfin+60;
    }
    if(segunin<segfin){
        minfin=minfin-1;
        segfin= segfin+60;
    }
}

bool FormatoHora::validaMS(FormatoHora) {
    bool minutosYSegValidos = true;

    if(minutos>=0 && minutos<=59 && segundos>=0 && segundos <=59){
        bool minutosYSegvalidos= true;
    }else if (minutos<=0 || minutos>59 || segundos<=0 ||segundos>59 ){
        bool minutosYSegValidos=false;
    }
}
int FormatoHora::getHoras() {
    return horas;
}
int FormatoHora::getMinutos() {
    return minutos;
}
int FormatoHora::getSegundos() {
    return segundos;
}
*/