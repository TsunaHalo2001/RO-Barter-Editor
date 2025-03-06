#include "src/MVC/Controlador.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    const Modelo modelo;
    const Vista vista;

    Controlador controlador(modelo, vista);

    while (controlador.getState() != -1) {
        controlador.tMode();
        controlador.keyEve();
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.