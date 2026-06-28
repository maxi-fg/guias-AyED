/*Dadas las medidas de dos ángulos de un triángulo, determinar la medida del tercero e informar
el resultado. */

#include <iostream>

using namespace std;

int main(){
    int lado1, lado2, lado3;
    cout << "Ingrese el angulo de 2 lados de un triangulo: " <<endl;
    cin >> lado1 >> lado2;
    if (lado1 + lado2 != 180){
        lado3 = 180 - (lado1 + lado2);
        cout << "El angulo del 3er lado es de: " << lado3 <<endl;
    }else {
        cout << "NO puede ser un triangulo";
    }
    return 0;
}