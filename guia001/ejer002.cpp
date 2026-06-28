/*Dado un Nº del 1 al 7 determinar (mostrar) el nombre del día de la semana que corresponde. Si
el nro está fuera de rango infórmelo como un error de ingreso de datos. Considere usar un
enum.*/

#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Ingrese un numero del 1 al 7: " <<endl;
    cin >> num;
    switch (num) {
        case 1:
            cout << "Lunes" <<endl;
            break;
        case 2:
            cout << "Martes" <<endl;
            break;
        case 3:
            cout << "Miercoles" <<endl;
            break;
        case 4:
            cout << "Jueves" <<endl;
            break;
        case 5:
            cout << "Viernes" <<endl;
            break;
        case 6:
            cout << "Sabado" <<endl;
            break;
        case 7:
            cout << "Domingo" <<endl;
            break;
        default:
            cout << "No esta dentro del rango" <<endl;
            break;
    }
}


