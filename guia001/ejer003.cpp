/*Ingresar dos valores distintos en dos Variables a y b, luego el valor ingresado en a pasarlo a b
y el valor Ingresado en b, Pasarlo a a y mostrarlos.*/

#include <iostream>

using namespace std;

int main (){
    int a, b;
    cout << "Ingresa un numero para A y B : " <<endl;
    cin >> a >> b;
    swap(a,b);
    cout << "Los numeros son : " << a << " y " << b <<endl;
}