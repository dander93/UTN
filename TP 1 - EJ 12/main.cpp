#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*           Informar los primeros 100 números naturales y su sumatoria.
*/

int main() {

    //para poder utilizar tildes u caracteres especiales
    setlocale (LC_ALL, "spanish");
    int i,sum=0;

    cout << "Programa que muestra los primeros 100 números naturales y la sumatoria de los mismos." << endl << endl;

    for(i=0;i<=100;i++){
        cout << i << endl;
        sum += i;
    }

    cout << endl << endl << "La sumatoria de los valores es: " << sum << endl;

    cout << "Presione una tecla para salir...";
    getche();
    return 0;
}
