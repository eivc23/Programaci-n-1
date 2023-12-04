#include <iostream>
#include <string>

class Animal {
public:
    Animal(std::string nombre) {
        this->nombre = nombre;
    }

    void AnimalCorriendo() {
        std::cout << "Este " << nombre << " está corriendo." << std::endl;
    }

private:
    std::string nombre;
};

class Domesticos : public Animal {
public:
    
    Domesticos(std::string nombre, std::string tipo) : Animal(nombre) {
        this->tipo = tipo;
    }

    void MostrarTipo() {
        std::cout << "Es un animal doméstico de tipo " << tipo << "." << std::endl;
    }

private:
    std::string tipo;
};

int main() {
    Domesticos Gato("animalito", "Gato");
    Gato.AnimalCorriendo(); 
    Gato.MostrarTipo(); 

    return 0;
}
