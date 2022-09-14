#include <iostream>
using namespace std;
#include "../Pila/Pila.h"
#include "../Lista/Lista.h"


void sacarDato(Pila<int> *p, int n){
    int sacado;
    Pila<int> p2;

    while(!p->esVacia()){
        sacado=p->pop();
        if(n==sacado){
            cout<<"God"<<endl;
            while(!p2.esVacia()){
                p->push(p2.pop());
            }
            return;
        }else{
            p2.push(sacado);
        }
    }
    cout<<"Esto nunca estuvo en la lista perri";

}


int main() {
    int inicio=0,final=0;
    string texto="Los caminos de la vida del puto de gonza";
    string aux="";
    Pila<string> pila;

    for(int i =0; i<texto.length();i++){
        final=i;
        if(texto[i]==' ' or i==texto.length()-1){
            for(int t=inicio;t<=final;t++){
                aux+=texto[t];
        }
            pila.push(aux);
            inicio=i;
            aux="";
        }
    }

    while(!pila.esVacia()){
        cout<<pila.pop();
    }





    return 0;
}
