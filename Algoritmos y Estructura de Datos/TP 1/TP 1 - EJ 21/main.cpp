#include <iostream>
#include <locale.h> // por las tildes y caracteres del espa�ol.
#include <conio.h> // por el getche.
#include <ctype.h> // para las conversiones de tipo.

using namespace std;

/*
*   consigna:
*           Dados N valores informar el mayor, el menor y en que posici�n del conjunto
*           fueron ingresados.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del espa�ol
    setlocale (LC_ALL, "spanish");

    //variables
    int i=1,mayor,posMayor,menor,posMenor;
    string a;

    cout << "Programa que permite obtener el mayor, el menor y que posici�n del conjunto de n�meros ingresados se encuentra." << endl << endl;

    cout << "Para terminar el proceso de ingreso de n�meros ingrese un valor no num�rico." << endl << endl;


    do {
        cout << "Posicion: " << i << ". Ingrese un valor: ";
        cin >> a;

        if(( isdigit( a[0] ) == 1) || ( isdigit( a[1] ) == 1 ) ) {//si el primero o el segundo valor no son d�gitos no trabajo los valores.
            if( ( i == 1 ) || ( stoi(a) < menor ) ) {
                menor = stoi(a); // convierto el valor de string a entero y lo guardo en menor.
                posMenor = i;
            }
            if( ( i == 1 ) || ( stoi(a) > mayor ) ) {
                mayor = stoi(a);
                posMayor = i;
            }
            i++;
        }
    } while(isdigit(a[0])||isdigit(a[1])); // compruebo el primer y el segundo valor de la cadena ingresada ( el segundo es para distinguir los casos en los que se ingresa un negativo).

    if( (isdigit(a[0]) || isdigit(a[1]) != 0) || ( i != 1 ) ) {
        cout << "El menor de los numeros ingresados es: " << menor << " En la posicion: " << posMenor << "." << endl;
        cout << "El mayor de los numeros ingresados es: " << mayor << " En la posicion: " << posMayor << "." << endl;
    } else {
        cout << endl <<"El primer valor ingresado no fu� num�rico." << endl;
    }

    cout << endl << endl << "Presione una tecla para salir...";
    getche();
    return 0;
}
