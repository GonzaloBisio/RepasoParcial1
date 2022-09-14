//
// Created by Gonzalo on 14/9/2022.
//
#include <iostream>
using namespace std;
#include "../Pila/Pila.h"
#include "../Lista/Lista.h"

int main() {
    Lista<int> l;
    l.insertarUltimo(1);
    l.insertarUltimo(2);
    l.insertarUltimo(3);
    l.insertarUltimo(4);
    l.insertarUltimo(5);

    l.print();
    l.moverUltimo(3);
    l.print();

    return 0;
}
