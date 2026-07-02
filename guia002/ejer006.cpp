/*Desarrolle una función que reciba dos enteros y devuelva la cantidad de veces que el dígito
pasado como segundo parámetro, se encuentra en el número del primer parámetro. Por ejemplo
si pasamos 7525 y 5 la respuesta debe ser 2. Con un assert verifique que el segundo parámetro
sea solo un dígito.*/

#include <cassert>
#include <iostream>
using namespace std;

int f(int num1, int num2){
    int temp, contador = 0;
    temp = num1;
    assert(num1 >= 0 & num2 <= 9);

    if (num1 == 0 && num2 == 0) {
        return 1;
    }

    if (num1 < 0) {
        num1 = -num1;
    }

    while (num1 > 0) {
        if ( num1 % 10 == num2){
            contador++;
        }
        num1 = num1/10;
    }
    return contador;
}

int main(){
    int num1, num2;
    cout << "Ingresar un numero entero y un numero que desea buscar dentro de ese numero entero: "<<endl;
    cin >> num1 >> num2;
    cout << "El numero entero es: " << num1 << " el numero que desea buscar dentro de este entero es: " << num2 << " y aparecio: " << f(num1, num2) << " vece(s)"<<endl;
    return 0;
}