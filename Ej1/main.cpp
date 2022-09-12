//
// Created by gonzalo on 12/09/22.
//
#include <iostream>

#include "../Nodo.h"
#include "../Pila.h"
#include "../Lista.h"

void eliminar_desde_pila(Pila<unsigned int> pila);

using namespace std;
void eliminar_desde_pila(Pila<unsigned int> pila, Lista<unsigned int> lista) {
    lista.print();
    while(pila.esVacia()){
        lista.remover(pila.pop());
        lista.print();
    }
}

int main() {

    Lista<int> l1;
    l1.insertarPrimero(1);
    l1.insertarPrimero(2);
    l1.insertarPrimero(3);
    l1.insertarPrimero(4);

    Pila<int> p1;
    p1.push(1);

    eliminar_desde_pila(p1,l1);
}




