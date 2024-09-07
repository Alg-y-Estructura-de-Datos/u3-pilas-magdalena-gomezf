#include <iostream>
#include "Pila/Pila.h"
using namespace std;
void aniadir(Pila<string>& pila1,const string& escr_borrar,const string& mensaje){
    pila1.push(escr_borrar+ " " + mensaje);
}
void deshacer(Pila<string> &pila1){
    if (!pila1.esVacia()){
        pila1.pop();
    } else{
        cout << "no hay mas por deshacer";
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
    aniadir(Pila1, "escribir", "texto");
    aniadir(Pila1,"escribir", "hola");
    aniadir(Pila1, "borrar " , "hola");
    deshacer(Pila1);

    mostrarPila(Pila1);
}