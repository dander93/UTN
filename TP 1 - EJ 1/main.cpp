#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            Dados dos valores enteros A y B, informar la suma, la resta y el producto.
*/

int main() {

    //para poder utilizar tildes u caracteres especiales
    setlocale (LC_ALL, "spanish");

    int numA,numB;

    cout << "Programa que realiza operaciones matemáticas a partir de dos valores ingresados."

    cout << "Ingrese el primer valor: ";
    cin >> numA;
    cout << "Ingrese el segundo valor: ";
    cin >> numB;

    cout << "La suma de " << numA << " y " << numB << " es: " << (numA+numB) << endl;
    cout << "La resta de " << numA << " y " << numB << " es: " << (numA-numB) << endl;
    cout << "La multiplicación de " << numA << " y " << numB << " es: " << (numA*numB) << endl;

    cout << "Presione una tecla para salir...";
    getche();

    return 0;
}
