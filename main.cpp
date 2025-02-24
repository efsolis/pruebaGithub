#include <iostream>

using namespace std;

void showMenu() {
    cout << "Calculadora Simple" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Salir" << endl;
    cout << "Elige una opción: ";
}

int main() {
    int opcion;
    double num1, num2;

    do {
        showMenu();
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingresa el número 1: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;
        }

        switch (opcion) {
            case 1:
                cout << "Resultado: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Resultado: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Resultado: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Resultado: " << num1 / num2 << endl;
                else
                    cout << "Error: División por cero" << endl;
                break;
            case 5:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
        }

        cout << endl;
    } while (opcion != 5);

    return 0;
}