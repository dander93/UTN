#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*           Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas:
*                ‘menor’ si la edad es menor o igual a 12
*                ‘cadete’ si la edad está comprendida entre 13 y 18
*                ‘juvenil’ si la edad es mayor que 18 y no supera los 26
*                ‘mayor’ en el caso que no cumpla ninguna de las condiciones anteriores
*/

int main() {

    //para poder utilizar tildes u caracteres especiales
    setlocale (LC_ALL, "spanish");
    int edad;

    cout << "Programa que informa un mensaje segun una condicion." << endl << endl;

    cout << "Ingrese una edad: ";
    cin >> edad;

    if(edad <= 12){
        cout << "Menor." << endl;
    }else if ( (edad >= 13) && ( edad <= 18 ) ){
        cout << "Cadete." << endl;
    }else if( (edad > 18) && (edad < 26) ){
        cout << "Juvenil." << endl;
    }else{
        cout << "Mayor." << endl;
    }

    cout << "Presione una tecla para salir...";
    getche();

    return 0;
}
