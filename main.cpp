#include "src/MVC/Controlador.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{
    /*
    const Modelo modelo;
    const Vista vista;

    Controlador controlador(modelo, vista);

    while (controlador.getState() != -1) {
        controlador.tMode();
        controlador.keyEve();
    }
    */
    try {
        YAML::Node etc = YAML::LoadFile(DBETC);

        std::string type = etc["Header"]["Type"].as<std::string>();
        int version = etc["Header"]["Version"].as<int>();
        printf("Type: %s - Version: %d\n", type.c_str(), version);

        const YAML::Node& body = etc["Body"];
        for (const auto & i : body) {
            const YAML::Node& item = i;
            const std::string id = item["AegisName"].as<std::string>();
            printf("Id: %s\n", id.c_str());
        }
    }
    catch (const std::exception &e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.