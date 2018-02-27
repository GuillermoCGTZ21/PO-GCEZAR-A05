#include <iostream>
#include "FormatoHora.h"

int main() {
    FormatoHora hora1 (15, 43,50);
    FormatoHora hora2 (2, 20, 33);

    FormatoHora horaresultante = hora1 + hora2;
    FormatoHora horaresultanteresta = hora2 - hora1;
    std::cout<<"SUMA DE HORA:"<<"\n";
    std::cout<< horaresultante.horas << ":" << horaresultante.minutos << ":" << horaresultante.segundos << "\n";

        std::cout<<"RESTA DE HORA:"<<"\n";
    std::cout<< horaresultanteresta.horas << ":" << horaresultanteresta.minutos << ":" << horaresultanteresta.segundos;

}