/*Ingresar tres valores enteros que representan los valores de cada lado de un triángulo.
Determinar e informar si el triángulo es equilátero (3 lados iguales), isósceles (2 lados iguales),
o escaleno (3 lados distinto) */

#include <iostream>

using namespace std;

int main(){
    int lado1, lado2, lado3;
    cout << "Ingrese los 3 lados de un triangulo : " <<endl;
    cin >> lado1 >> lado2 >> lado3;
    if (lado1 == lado2){
        if(lado2 == lado3){
            cout << "Es equilatero."<<endl;
        }else {
            cout << "Es isosceles."<<endl;
        }
    }else{
        cout << "Escaleno."<<endl;
    }
    return 0;
}