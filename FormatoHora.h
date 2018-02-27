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
    };

#endif //SOBRECARGA_FORMATOHORA_H
