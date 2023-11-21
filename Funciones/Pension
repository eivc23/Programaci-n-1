#include <iostream>
#include <string>

// Definición de la estructura Persona
struct Persona {
    std::string nombre, ocupacion;
    int sueldo, edad;
};

// Función para calcular la edad faltante para jubilarse
int edadFaltante(int edadActual) {
    int edadJubilado = 65;
    return edadJubilado - edadActual;
}

// Función para calcular y actualizar el ahorro mensualmente
void calculaAhorroMensual(int edad, int sueldo, int& ahorroAcumulado) {
    if (edad < 65) {
        if (sueldo > 100) {
            ahorroAcumulado += 100;
        }
    }
}

// Función para mostrar la información de la persona
void mostrarInformacion(const Persona& persona) {
    std::cout << "\nInformacion de la persona:\n";
    std::cout << "Nombre: " << persona.nombre << std::endl;
    std::cout << "Ocupacion: " << persona.ocupacion << std::endl;
    std::cout << "Edad: " << persona.edad << " años" << std::endl;
    std::cout << "Sueldo: " << persona.sueldo << " dólares/mes" << std::endl;
}

// Función para realizar todas las operaciones relacionadas con la persona
void realizarOperacionesPersona(Persona& persona, int& ahorroAcumulado) {
    mostrarInformacion(persona);

    int edadFalta = edadFaltante(persona.edad);
    std::cout << "Edad faltante para jubilarse: " << edadFalta << " años" << std::endl;

    for (int i = persona.edad; i < 65; ++i) {
        calculaAhorroMensual(i, persona.sueldo, ahorroAcumulado);
    }

    std::cout << "Total del ahorro acumulado a los 65 años: " << ahorroAcumulado << " dólares" << std::endl;
}

// Función para obtener la información del usuario
Persona obtenerInformacionUsuario() {
    Persona persona;
    std::cout << "Ingrese el nombre: ";
    std::cin >> persona.nombre;

    std::cout << "Ingrese la ocupacion: ";
    std::cin >> persona.ocupacion;

    std::cout << "Ingrese la edad: ";
    std::cin >> persona.edad;

    std::cout << "Ingrese el sueldo: ";
    std::cin >> persona.sueldo;

    return persona;
}

int main() {
    Persona persona = obtenerInformacionUsuario();
    int ahorroAcumulado = 0;
    
    realizarOperacionesPersona(persona, ahorroAcumulado);

    return 0;
}
