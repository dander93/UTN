#include <iostream>
#include <locale.h>
#include <conio.h>


using namespace std;

/*
*   consigna:
*            Ingresar e informar valores, mientras que el valor ingresado no sea negativo.
*            Informar la cantidad de valores ingresados.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish.");

    //variables
    float num,cont=0;

        cout << "Programa que cuenta los valores ingresados siempre y cuando este no sea negativo." << endl;

    do{
        cout << endl << "Ingrese un valor: ";
        cin >> num;

        if(num>0){
            cont++;
        }

    }while(num>=0);

    cout << endl << "La cantidad de valores ingresados fue: " << cont;

    cout << endl << "Presione una tecla para salir...";
    getche();
    return 0;
}
