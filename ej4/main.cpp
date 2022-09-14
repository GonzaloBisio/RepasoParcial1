#include <iostream>
using namespace std;
#include "../Pila/Pila.h"
#include "../Lista/Lista.h"

int main() {
    Lista<char> l;
    l.insertarUltimo('a');
    l.insertarUltimo('b');
    l.insertarUltimo('c');
    l.insertarUltimo('d');
    l.insertarUltimo('e');

    l.print();
    l.moverPrimero('c');
    l.print();

    l.moverSegundo('d');
    l.print();
    return 0;
}
