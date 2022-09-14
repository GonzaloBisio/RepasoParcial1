#include <iostream>
using namespace std;
#include "../Pila/Pila.h"
#include "../Lista/Lista.h"

void eliminar_desde_pila(Pila<int> &p, Lista<int> &l){
    int aux;
    while(!p.esVacia()){
        aux = p.pop();
        if(aux<l.getTamanio()-1){
            l.remover(aux);
        }else{
            cout<<"No se pudo eliminar la posicion "<<aux<<endl;
        }
    }

}

int main() {

    Lista<int> miLista;
    Pila<int> miPila;

    miLista.insertarPrimero(1);
    miLista.insertarPrimero(3);
    miLista.insertarPrimero(6);
    miLista.insertarPrimero(2);

    miLista.print();

    miPila.push(2);

    eliminar_desde_pila(miPila, miLista);
    miLista.print();
    return 0;
}
