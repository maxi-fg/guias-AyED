/*Desarrolle una función que reciba un año como parámetro y devuelva verdadero si es bisiesto.
Nota: los años bisiestos son aquellos que son divisibles por 4 pero no por 100, salvo que
también sean divisibles por 400.
Esto se estableció al adoptar el calendario gregoriano en 1582, por lo tanto esta lógica para el
cálculo sirve a partir de esa fecha.*/
#include <iostream>
using namespace std;

bool esBisiesto (int ano){
    if (ano < 1582){
        return false;
    }

    return ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0;
}

int main(){
    int ano;
    cout << "Ingrese un ano: ";
    cin >> ano;
    if(esBisiesto(ano)){
        cout << "Es bisiesto" <<endl;
    }else {
        cout << "NO Es bisiesto" <<endl;
    }
    return 0;
}