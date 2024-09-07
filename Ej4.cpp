#include <iostream>
using namespace std;
#include "Pila/Pila.h"
int funcionSuma(Pila<int>& pila1, int n) {
    int suma=0;
    bool encontrado= false;
    while(!pila1.esVacia()){
        int vaux=pila1.pop();
        if(vaux==n){
            encontrado=true;
        }
        if (!encontrado){
            suma=suma+vaux;
        }
    }
    return suma;
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
    int tamanio, elemento, n;
    cout << "ingrese el tamanio de la pila" << endl;
    cin >> tamanio;

    cout << "Ingrese los " << tamanio << " numeros de la pila: ";
    for (int i = 0;  i< tamanio; i++) {
        cin >> elemento;
        Pila1.push(elemento);
    };
    mostrarPila(Pila1);

    cout << "ingrese un numero entero ";
    cin >> n;

    cout<< "Para n= " << n << " la suma es: " << funcionSuma(Pila1, n);

    return 0;
}
