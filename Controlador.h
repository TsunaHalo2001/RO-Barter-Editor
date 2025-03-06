//
// Created by tsuna on 6/03/25.
//

#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "config.h"
#include "Modelo.h"
#include "Vista.h"

class Controlador {
    protected:
        Modelo modelo;
        Vista vista;

    public:
        Controlador(const Modelo&, const Vista&);
        ~Controlador();

        void tMode();
        void keyEve();
        int getState();

        Modelo &getModelo();
        Vista &getVista();

        void setModelo(const Modelo&);
        void setVista(const Vista&);
};



#endif //CONTROLADOR_H
