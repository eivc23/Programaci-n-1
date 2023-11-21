#include <iostream>
#include <string>

class Animal {
public:
    Animal(std::string nombre) : nombre(nombre) {}

    void AnimalCorriendo() {
        std::cout << "Este " << nombre << " está corriendo." << std::endl;
    }

    std::string getNombre() const {
        return nombre;
    }

    virtual std::string comida() const {
        return "comida de animal";
    }

private:
    std::string nombre;
};

class Domesticos : public Animal {
public:
    Domesticos(std::string nombre, std::string tipo) : Animal(nombre), tipo(tipo) {}

    void MostrarTipo() {
        std::cout << "Es un animal doméstico de tipo " << tipo << "." << std::endl;
    }

    std::string comida() const override {
        return "comida de animal doméstico";
    }

private:
    std::string tipo;
};

class Perro : public Animal {
public:
    Perro(std::string nombre) : Animal(nombre) {}

    std::string comida() const override {
        return "croquetas";
    }
};

class Pollos : public Animal {
public:
    Pollos(std::string nombre) : Animal(nombre) {}

    std::string comida() const override {
        return "Maíz";
    }
};

int main() {
    Animal* Gato = new Domesticos("animalito", "Gato");
    Animal* miPerro = new Perro("Pinkie");
    Animal* misPollos = new Pollos("Toto");

    std::cout << "Nombre del Gato: " << Gato->getNombre() << std::endl;
    std::cout << "Comida del Gato: " << Gato->comida() << std::endl;
    Gato->AnimalCorriendo();

    std::cout << "Nombre del Perro: " << miPerro->getNombre() << std::endl;
    std::cout << "Comida del Perro: " << miPerro->comida() << std::endl;
    miPerro->AnimalCorriendo();

    std::cout << "Nombre del Pollo: " << misPollos->getNombre() << std::endl;
    std::cout << "Comida de los Pollos: " << misPollos->comida() << std::endl;
    misPollos->AnimalCorriendo();

    delete Gato;
    delete miPerro;
    delete misPollos;

    return 0;
}
