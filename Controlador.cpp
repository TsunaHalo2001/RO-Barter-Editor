//
// Created by tsuna on 6/03/25.
//

#include "Controlador.h"

Controlador::Controlador(const Modelo& pModelo, const Vista& pVista) : modelo(pModelo), vista(pVista) {
}

Controlador::~Controlador() = default;

void Controlador::tMode() {
    switch (modelo.getState()) {
        case 0:
            vista.readState(modelo.getShop(), modelo.getDatabase());
            break;
        case 1:
            vista.tMMenu();
            break;
        case 2:
            vista.tBMenu();
            break;
        default:
            break;
    }
}

void Controlador::keyEve() {
    std::string option;
    if (modelo.getState() != 0) std::cin >> option;
    else modelo.setState(1);

    switch (modelo.getState()) {
        case 1:
            if (option == "1") modelo.setState(2);
            else if (option == "0") modelo.setState(-1);
            break;
        case 2:
            if (option == "0") modelo.setState(1);
            break;
        default:
            break;
    }
}

int Controlador::getState() {
    return this->modelo.getState();
}

Modelo &Controlador::getModelo() {
    return this->modelo;
}

Vista &Controlador::getVista() {
    return this->vista;
}

void Controlador::setModelo(const Modelo& pModelo) {
    this->modelo = pModelo;
}

void Controlador::setVista(const Vista& pVista) {
    this->vista = pVista;
}