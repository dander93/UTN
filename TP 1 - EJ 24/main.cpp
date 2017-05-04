#include <iostream>
#include <locale.h> // por las tildes y caracteres del espa�ol.
#include <conio.h> // por el getche.


using namespace std;

/*
*   consigna:
*           Se dispone de un lote de valores enteros positivos que finaliza con un n�mero
*           negativo.
*           El lote est� dividido en sublotes por medio de valores cero. Desarrollar un programa que
*           determine e informe:
*                a) por cada sublote el promedio de valores
*                b) el total de sublotes procesados
*                c) el valor m�ximo del conjunto, indicando en que sublote se encontr� y la posici�n
*                    relativa del mismo dentro del sublote
*                d) valor m�nimo de cada sublote
*           Nota: el lote puede estar vac�o (primer valor negativo), o puede haber uno, varios o todos los
*           sublotes vac�os (ceros consecutivos)
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del espa�ol
    setlocale (LC_ALL, "spanish");

    //variables
    int valor=0,i=0,j=0,tam=1;
    string temp;
    cout << "Programa que divide un lote de numeros y los divide en sublotes e informa: " << endl;
    cout << "\t a. Por cada sublote el promedio de valores." << endl;
    cout << "\t b. El total de sublotes procesados." << endl;
    cout << "\t c. El valor m�ximo del conjunto, indicando en que sublote se encontr� y la posici�nrelativa del mismo dentro del sublote." << endl;
    cout << "\t d. Valor m�nimo de cada sublote" << endl << endl;

    cout << "Ingresar el lote de numeros, se separan los lotes por medio de 0. Finaliza ingresando un valor negativo." << endl;

         //lo voy a resolver utilizando un vector manejado de forma din�mica con un ciclo.

         //ingreso todos los valores en la matriz, establezco el largo de la matriz din�micamente, e incremento el recorrido.
    while(valor >= 0){
        cout << "ingrese un valor: ";
        cin >> valor;
        cout << "i: " << i << " "; // muestro el valor de i en el programa
        cout << "tam: " << tam << " "; // muestro el valor de tam en el programa
        if(valor >= 0) {
            temp[i] = valor; // guardo valor en la posici�n i , en el vector
            tam+=1;//incremento el tama�o del vector en 1
            i+=1; // incremento el valor que recorre en 1
        }else{
            cout << "Se ingreso un valor negativo. Finalizada la secuencia de ingreso de numeros." << endl;
        }
    }





    cout << endl << endl << "Presione una tecla para salir...";
    getche();
    return 0;
}
