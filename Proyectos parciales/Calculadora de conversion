#include <iostream>
#include <string>

using namespace std;

// Función para convertir de binario a decimal
int bin2dec(const string& binary) {
    int decimal = 0;
    int tamBinario = binary.length();  
    for (int i = 0; i < tamBinario; i++) {
        if (binary[i] == '1') {
            decimal = decimal * 2 + 1;
        } else if (binary[i] == '0') {
            decimal *= 2;
        } else {
            cerr << "Carácter binario no válido: " << binary[i] << endl;
            return -1; // Manejo de error
        }
    }

    return decimal;
}


// Función para convertir de hexadecimal a decimal
int hex2dec(const string& hex) {
    int decimal = 0;
    int Tamhex = hex.length();

    for (int i = 0; i < Tamhex; i++) {
        char c = hex[i];
        int digit;

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        } else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        } else {
            cerr << "Carácter hexadecimal no válido: " << c << endl;
            return -1; // Manejo de error
        }

        decimal = decimal * 16 + digit;
    }

    return decimal;
}

// Función para convertir de decimal a binario
string dec2bin(int n) {
    if (n == 0) {
        return "0"; // Caso base
    }

    string binario = "";
    while (n != 0) {
        binario = to_string(n % 2) + binario;
        n /= 2;
    }

    return binario;
}

// Función para convertir de decimal a hexadecimal
string dec2hex(int n) {
    if (n == 0) {
        return "0"; // Caso base
    }

    string hex = "";
    while (n != 0) {
        int r = n % 16;
        if (r < 10) {
            hex = to_string(r) + hex;
        } else {
            hex = char(r - 10 + 'A') + hex;
        }
        n /= 16;
    }
    return hex;
}

int main() {
    // Variables
    string numero;
    int decimal;
    bool entradaValida = false;

    // Bucle para entrada válida
    while (!entradaValida) {
        // Solicitar al usuario que ingrese un número en binario, hexadecimal o decimal
        cout << "Escribe un número en binario, hexadecimal o decimal: ";
        cin >> numero;

        // Procesamiento de la entrada
        if (numero.find_first_not_of("01") == string::npos) {
            // Es una cadena binaria
            decimal = bin2dec(numero);
            entradaValida = decimal != -1;
        } else if (numero.find_first_not_of("0123456789ABCDEFabcdef") == string::npos) {
            // Es una cadena hexadecimal
            decimal = hex2dec(numero);
            entradaValida = decimal != -1;
        } else {
            // Es una cadena decimal
            try {
                decimal = stoi(numero);
                entradaValida = true;
            } catch (const std::invalid_argument& e) {
                cerr << "Entrada no válida. Inténtalo de nuevo." << endl;
            }
        }
    }

    // Realizar conversiones y mostrar resultados
    string binario = dec2bin(decimal);
    string hexadecimal = dec2hex(decimal);

    cout << "Número decimal: " << decimal << endl;
    cout << "Número binario: " << binario << endl;
    cout << "Número hexadecimal: " << hexadecimal << endl;

    return 0;
}
