#include <iostream>
#include "Pila/Pila.h"
using namespace std;
void aniadir(Pila<string>& pila1,const string& inout,const string& lugar){

    if (inout=="in"){
        pila1.push(lugar);
    }else{
        pila1.pop();
    }
}
void mostrarPila(Pila<string>& pila1){
Pila<string>aux;

    while (!pila1.esVacia()){
        string valor=pila1.pop();
        aux.push(valor);
        cout << valor << endl;
    }
    while (!aux.esVacia()){
         string valor=aux.pop();
         pila1.push(valor);
    }


}
int main() {

    Pila<string> Pila1;
    aniadir(Pila1,"in", "recepcion");
    aniadir(Pila1,"in", "habitacion");
    aniadir(Pila1,"out", "habitacion");
    aniadir(Pila1,"in", "cocina");
    aniadir(Pila1,"in", "ascensor");

    mostrarPila(Pila1);
}