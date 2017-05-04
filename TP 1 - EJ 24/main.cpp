#include <iostream>
#include <locale.h> // por las tildes y caracteres del español.
#include <vector> // para trabajar con el vecctor dinamico.

using namespace std;

/*
*   consigna:
*           Se dispone de un lote de valores enteros positivos que finaliza con un número
*           negativo.
*           El lote está dividido en sublotes por medio de valores cero. Desarrollar un programa que
*           determine e informe:
*                a) por cada sublote el promedio de valores
*                b) el total de sublotes procesados
*                c) el valor máximo del conjunto, indicando en que sublote se encontró y la posición
*                    relativa del mismo dentro del sublote
*                d) valor mínimo de cada sublote
*           Nota: el lote puede estar vacío (primer valor negativo), o puede haber uno, varios o todos los
*           sublotes vacíos (ceros consecutivos)
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    //variables
    vector<int> temp,vSublotes;
    int valor=0,i=0,j=0,promedio=0,sublotes=0,k=0;
    cout << "Programa que divide un lote de numeros en sublotes e informa: " << endl;
    cout << "\t a. Por cada sublote el promedio de valores." << endl;
    cout << "\t b. El total de sublotes procesados." << endl;
    cout << "\t c. El valor máximo del conjunto, indicando en que sublote se encontró y la posiciónrelativa del mismo dentro del sublote." << endl;
    cout << "\t d. Valor mínimo de cada sublote" << endl << endl;

    cout << "Ingresar el lote de números, se separan los lotes por medio de 0. Finaliza ingresando un valor negativo." << endl << endl;

    //ingreso todos los valores en la matriz, establezco el largo de la matriz dinámicamente, e incremento el recorrido.
    while(valor >= 0) {

        cout << "Ingrese un valor: ";
        cin >> valor;

        //llenamos el vector con valores.
        if(valor >= 0) {
            i++;
            temp.resize(i);//re acomodo el tamaño del vector sumando una posición cuando se va a introducir un valor.
            temp[i-1]=valor;//guardo valor en la posición anterior a la ultima ( agregada con resize ).
        } else {
            cout << "Se ingreso un valor negativo. Finalizada la secuencia de ingreso de numeros." << endl;
        }
    }

    cout << endl << "*********************************" << endl ;
    cout << "Informe" << endl;
    cout << "*********************************" << endl ;

    if( i > 0 ) {
        for(i=0; i<temp.size(); i++) {//recorro todo el array
            if(temp[i] == 0) { //encuentro un sublote

                sublote++;
                vSublotes.resize(sublote);

                if(temp[i-1]!=0) {
                    for(j=i; j==0; j--) { //trabajo el sublote
                        promedio += temp[j];
                    }
                    promedio = promedio / i
                    vSublotes[k]
                }
            }
        }
    }







}
else {
    cout<<"El primer valor ingresado es utilizado para la salida de la secuencia de ingreso. No se ingreso ningun valor , por lo cual no hay informe que efectuar." << endl;
}

cout << endl << endl << "Presione una tecla para salir...";
cin.get();
return 0;
}
