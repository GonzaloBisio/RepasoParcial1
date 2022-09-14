#ifndef NODO_H
#define NODO_H
#define SIN_PRIORIDAD 1000000
template<class T>
class Nodo{
private:
    T dato;
    Nodo<T> *siguiente;
    int prioridad;

public:
    T getDato(){
        return dato;
    }

    void setDato(T d){
        dato = d;
    }

    Nodo<T> *getSiguiente(){
        return siguiente;
    }

    void setSiguiente(Nodo<T> *siguiente){
        this->siguiente = siguiente;
    }

    int getPrioridad(){
        return prioridad;
    }

    void setPrioridad(int prio){
        prioridad= prio;
    }
};

#endif //NODO_H