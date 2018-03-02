//
// Created by el_me on 26/02/2018.
//

#ifndef PO_GCEZAR_A05_FORMATOHORA_H
#define PO_GCEZAR_A05_FORMATOHORA_H


#include <iostream>

class FormatoHora {

    friend FormatoHora operator+ (const FormatoHora &h1, const FormatoHora &h2);
    friend FormatoHora operator- (const FormatoHora &h1, const FormatoHora &h2);


//Metodos de la clase FormatoHora.
    public:
        FormatoHora(int h, int m, int s);

        int horas;
        int minutos;
        int segundos;
        bool validaHrs1(FormatoHora &h1);
        bool validaHrs2(FormatoHora &h2);
        bool validaMS1(FormatoHora &h1);
        bool validaMS2(FormatoHora &h2);
    };

#endif //SOBRECARGA_FORMATOHORA_H
