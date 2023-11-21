#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string usuario;
    string contraseña;
};

int main() {
    string usuarios[] = {"evc", "ivc", "inv", "rss"};
    string contraseñas[] = {"123", "234", "456", "567"};

    bool sesion = false;

    do {
        Persona persona1;

        cout << "Usuario: ";
        getline(cin, persona1.usuario);

        cout << "Contraseña: ";
        getline(cin, persona1.contraseña);

        for (int i = 0; i < 4; i++) {
            if (persona1.usuario == usuarios[i] && persona1.contraseña == contraseñas[i]) {
                sesion = true;
                break;
            }
        }

        if (!sesion) {
            cout << "Usuario y/o contraseña incorrectas, intenta de nuevo" << endl;
        }
    } while (!sesion);

    cout << "Has iniciado sesión." << endl;

    return 0;
}
