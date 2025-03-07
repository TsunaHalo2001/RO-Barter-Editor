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
            vista.tMainMenu();
            break;
        case 2:
            vista.tBarterMenu();
            if (modelo.getWarningFlag() == 1) vista.tWarningAddCategory();
            break;
        case 3:
            vista.tAddMenu();
            break;
        case 4:
            vista.tAddCategory();
            break;
        case 5:
            vista.tErrorAddCategory();
            break;
        default:
            break;
    }
}

void Controlador::keyEve() {
    std::string input;
    if (modelo.getState() != 0) vista.tInput(input);

    switch (modelo.getState()) {
        case 0:
            modelo.setState(1);
            break;
        case 1:
            if (input == "0") modelo.setState(-1);
            else if (input == "1") modelo.setState(2);
            break;
        case 2:
            if (input == "0") modelo.setState(1);
            else if (input == "1") modelo.setState(3);
            modelo.setWarningFlag(0);
            break;
        case 3:
            if (input == "0") modelo.setState(2);
            else if (input == "1") modelo.setState(4);
            break;
        case 4:
            if (input == "0") modelo.setState(3);
            else if (!modelo.isCategoryOnShop(input)) modelo.addCategory(Category(input));
            else modelo.setState(5);
            break;
        case 5:
            if (input == "0") modelo.setState(4);
            break;
        default:
            break;
    }

    input.clear();
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