/*Desarrolle una función que dada una temperatura (float) en grados fahrenheit los convierta a
grados celcius. Nota: En fahrenheit el punto de congelación del agua es 32° y la temperatura de
ebullición del agua es 212°.
Agregue un assert para verificar la precondición de que la temperatura no puede ser menor que
-459,67°F*/

#include <iostream>
#include <cassert>
using namespace std;

float conversion(float fahrenheit){
    assert(fahrenheit >= -459.67);
    float celcius = (fahrenheit - 32) / 1.8;
    return celcius;     
}

int main(){
    float fahrenheit;
    cout << "Ingrese numero de grados: ";
    cin >> fahrenheit;
    cout << "Fahrenheit : " << fahrenheit << " Celcius : " << conversion(fahrenheit) <<endl;
    return 0;
}