#include <iostream>
#include "FormatoHora.h"

int main() {
    FormatoHora hora1 (21, 46,12);
    FormatoHora hora2 (13, 25, 10);

    std::cout<< "Hora 1= "<< hora1.horas << ":" << hora1.minutos << ":" << hora1.segundos<< "\n";
    std::cout<< "Hora 2= "<< hora2.horas << ":" << hora2.minutos << ":" << hora2.segundos<< "\n";
    FormatoHora validaHr1 = *new FormatoHora(hora1);
    FormatoHora validaHr2 = *new FormatoHora(hora2);
    validaHr1.validaHrs1(hora1);
    validaHr2.validaHrs2(hora2);

    FormatoHora validaMS1 = *new FormatoHora(hora1);
    FormatoHora validaMS2 = *new FormatoHora(hora2);
    validaMS1.validaMS1(hora1);
    validaMS2.validaMS2(hora2);


    FormatoHora horaresultante = hora1 + hora2;
    FormatoHora horaresultanteresta = hora2 - hora1;
    std::cout<<"\n"<<"SUMA DE HORA:"<<"\n";
    std::cout<< horaresultante.horas << ":" << horaresultante.minutos << ":" << horaresultante.segundos << "\n";

    std::cout<<"RESTA DE HORA:"<<"\n";
    std::cout<< horaresultanteresta.horas << ":" << horaresultanteresta.minutos << ":" << horaresultanteresta.segundos;






}