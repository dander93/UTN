#include <iostream>
#include <locale.h> // por las tildes y caracteres del español.
#include <conio.h> // por el getche.


using namespace std;

/*
*   consigna:
*           Dado un conjunto de valores, que finaliza con un valor nulo, determinar e
*           imprimir (si hubo valores):
*               a) El valor máximo negativo
*               b) El valor mínimo positivo
*               c) El valor mínimo dentro del rango -17.3 y 26.9
*               d) El promedio de todos los valores.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    //variables
    float valor,minimoRango=26.9,mayor=0,menor=0,promedio=0,i=1,j=0;

    cout << "Programa que permite ingresar un conjunto de valores ( finalizando con un valor nulo - 0 ) y determinar: " << endl;
    cout << "\t a) El valor máximo negativo." << endl;
    cout << "\t b) El valor mínimo positivo." << endl;
    cout << "\t c) El valor mínimo dentro del rango -17.3 y 26.9." << endl;
    cout << "\t d) El promedio de todos los valores." << endl << endl;


    while(valor != '\0') {
        cout << "Ingrese un valor: ";
        cin >> valor;

        if(valor!= '\0') {//compruebo que el valor ingresado no es un nulo
            promedio += valor; // guardo los valores para calcular luego el promedio

            if( (valor >= -17.3) && (valor <= 26.9) ) {//compruebo si el valor ingresado cumple con el punto c.
                if( (j == 0) || (valor > minimoRango) ) {
                    minimoRango = valor;

                }
                j++;//compruebo si es el primer valor entre los pedidos ingresado. y luego lo utilizo para saber si se inresaron valores.
            }
            if( (valor < 0) && (valor > menor) ) {//compruebo si cumple con el punto a.
                menor = valor;
            }
            if(valor > mayor) { // compruebo si cumple con el punto b.
                mayor = valor;
            }
            i++;//cuento los valores ingresados para el promedio
        }
    }


    cout << endl << "*********************************" << endl;
    cout << "Informe" << endl << endl;

    if(menor < 0) {
        cout << "El valor máximo negativo ingresado fué: " << menor << endl;
    } else {
        cout << "No se ingreso ningún valor negativo." << endl;
    }

    if(mayor > 0) {
        cout << "El mayor mínimo positivo ingresado fué: " << mayor << endl;
    } else {
        cout << "No se ingresaron valores positivos." << endl;
    }

    if(j > 0) {
        cout << "El valor mínimo dentro del rango -17.3 y 26.9 ingresado fué: " << minimoRango << endl;
    } else {
        cout << "Ninguno de los valores ingresados esta comprendido entre -17.3 y 26.9." << endl;
    }

    if(i > 1) {
        cout << "El promedio de los valores ingresados es: " << (float)promedio/i << endl;
    } else {
        cout << "El primer valor ingresado fue nulo, no se realizo ningún procedimiento." << endl;
    }




    cout << endl << endl << "Presione una tecla para salir...";
    getche();
    return 0;
}
