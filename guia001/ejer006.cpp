/*Dado como dato el valor del lado de un cuadrado calcular su perímetro, su superficie, e
informar los mismos con carteles aclaratorios.*/

#include <iostream>
using namespace std;

int main (){
    int lado, superficie, perimetro;
    cout << " Ingresar un valor para un lado del cuadrado: ";
    cin >> lado;
    superficie = lado * lado;
    perimetro = lado * 4;

    cout << "La superficie es de : " << superficie << " y el perimetro es de : " << perimetro <<endl;
    return 0;
}