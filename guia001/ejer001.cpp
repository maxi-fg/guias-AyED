//Ingresar un valor en mm y convertirlo a pulgadas (Dato: 1" = 25,4 mm).

#include <iostream>
using namespace std;

int main(){
    double num, pulgada;
    cout << "Ingresar un valor en mm para convertirlo a pulgadas 1 = 25,4mm : " << endl;
    cin >> num;
    pulgada = 25.4 * num;
    cout << "Las pulgadas son " << pulgada <<endl;
}