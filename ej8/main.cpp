#include <iostream>
using namespace std;
#include "../Pila/Pila.h"
#include "../Lista/Lista.h"

int main() {
    Lista<int> l;
    l.insertarUltimo(3);
    l.insertarUltimo(4);
    l.insertarUltimo(5);
    cout<<l.getTamaRec();
    return 0;
}
