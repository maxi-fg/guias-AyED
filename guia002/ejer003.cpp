/*Desarrolle la función inversa a la anterior, dada una fecha como un entero con formato
AAAAMMDD separarla en sus componentes día, mes y año y mostrarla en la función main a partir
de estas variables, con formato día/mes/año.
Variante: haga los ajustes necesarios para mostrar el resultado con formato DD/MM/AAAA. Es
decir que agregue ceros de ser necesario para que muestre, por ejemplo, 01/02/2019 en lugar
de 1/2/2019.
Nota: la variante indicada NO es importante desde el punto de vista del curso, es para quienes
quieran profundizar un poco más en las particularidades de la biblioteca estándar de C++.
Pista: Usar #include <iomanip> y las funciones setw y setfill.*/

#include <iostream>
using namespace std;

void conversion(int fecha, int &anio, int &mes, int &dia ){
    anio = fecha / 10000;
    mes = (fecha % 10000) / 100;
    dia = (fecha % 10000) % 10;
}

int main(){
    int fecha, Ranio, Rmes, Rdia;
    cout << "Ingresar un fecha en formato AAAAMMDD: ";
    cin >> fecha;
    conversion(fecha, Ranio, Rmes, Rdia );
    cout << Ranio << " " << Rmes << " " << Rdia <<endl;
}