#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*           Dados N y M números naturales, informar su producto por sumas sucesivas.
*/

int main() {

    //para poder utilizar tildes u caracteres especiales
    setlocale (LC_ALL, "spanish");
    int num1=0,num2=0,res=0,i=0;
    cout << "Programa que dados dos números informa su producto a través de sumas sucesivas." << endl << endl;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    for(i=1 ; i <= num2 ; i++){
        res += num1;
        if( i==num2 ){
            cout << num1 << "=" << res << endl;
        }else{
            cout << num1 << "x";
        }
    }

    cout << endl << "************************" << endl << endl;
    cout << num1 << "*" << num2 << "=" << res << endl;

    cout << endl << "Presione una tecla para salir...";
    getche();
    return 0;
}
