#include <iostream>
using namespace std;
#include "Pila/Pila.h"

void funcionRemover(Pila<int>& pila1, int remover){
    Pila<int> aux;
    bool encontado=false;
    int cont=0;
    int cambio;

    while (!pila1.esVacia()){
        cambio=pila1.pop();
        if (cambio==remover){
            if (!encontado) {
                encontado = true;
                aux.push(cambio);
            }
            cont ++;
        } else {
            aux.push(cambio);
        }
    }
    while (!aux.esVacia()){
        int nuevo=aux.pop();
        if (cont==1){
            if(nuevo!=remover){
                pila1.push(nuevo);
            }
        }
        else{
            pila1.push(nuevo);
        }
    }


}
void mostrarPila(Pila<int>& pila) {
    Pila<int> pilaAux;

    while (!pila.esVacia()) {
        int valor = pila.pop();
        cout << valor << " ";
        pilaAux.push(valor);
    }
    cout << endl;

    // Restaurar la pila original
    while (!pilaAux.esVacia()) {
        pila.push(pilaAux.pop());
    }
}
int main() {

    Pila<int> Pila1;
    int tamanio, elemento, remover;
    cout << "ingrese el tamanio de la pila" << endl;
    cin >> tamanio;

    cout << "Ingrese los " << tamanio << " numeros de la pila: ";
    for (int i = 0;  i< tamanio; i++) {
        cin >> elemento;
        Pila1.push(elemento);
    };
    mostrarPila(Pila1);

    cout << "ingrese el valor que desea remover";
    cin >> remover;

    funcionRemover(Pila1, remover);
    mostrarPila(Pila1);
    return 0;
}
