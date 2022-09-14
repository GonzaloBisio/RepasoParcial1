#ifndef U04_COLAS_COLA_COLA_H_
#define U04_COLAS_COLA_COLA_H_

#include "nodo.h"

#define SIN_PRIORIDAD 1000000

/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template <class T>
class Cola
{
private:
    Nodo<T> *tope, *fondo;

public:
    Cola();
    ~Cola();

    void encolar(T dato);
    void encolarPrioridad(T dato,int prioridad);
    T desencolar();
    bool esVacia();
    T peek();
};


template <class T> //constructor
Cola<T>::Cola()
{
    tope = nullptr;
    fondo = nullptr;
}


template <class T>       // Destructor de la clase Cola, se encarga de liberar la memoria de todos los
Cola<T>::~Cola()        //nodos utilizados en la Cola
{
    while (!esVacia())
    {
        desencolar();
    }

    delete tope;
    delete fondo;
}


template <class T>
void Cola<T>::encolar(T dato)  //Inserta un dato en la Cola
{
    Nodo<T> *nuevo = new Nodo<T>();
    nuevo->setDato(dato);
    nuevo->setSiguiente(nullptr);

    if (esVacia())
    {
        tope = nuevo;
    }
    else
    {
        fondo->setSiguiente(nuevo);
    }

    fondo = nuevo;
}

template <class T>
void Cola<T>::encolarPrioridad(T dato, int prioridad)
{

    if (prioridad >= SIN_PRIORIDAD)
    {
        encolar(dato);
        return;
    }

    Nodo<T> *nuevo = new Nodo<T>();
    nuevo->setDato(dato);
    nuevo->setPrioridad(prioridad);

    Nodo<T> *aux = tope;

    if(esVacia()){
        tope = nuevo;
        fondo = tope;
        return;
    }

    if (tope->getPrioridad() > prioridad)
    {
        nuevo->setSiguiente(tope);
        tope = nuevo;
        return;
    }

    while (aux->getSiguiente() != nullptr && aux->getSiguiente()->getPrioridad() <= prioridad)
    {
        aux = aux->getSiguiente();
    }

    nuevo->setSiguiente(aux->getSiguiente());
    aux->setSiguiente(nuevo);
}

template <class T> //Responde si la cola se encuentra vacia
bool Cola<T>::esVacia()
{
    return fondo == nullptr;
}


template <class T>
T Cola<T>::desencolar() // Obtener el dato de la Cola

{
    if (esVacia())
    {
        throw 400;
    }

    T dato = tope->getDato();
    Nodo<T> *aBorrar = tope;
    tope = tope->getSiguiente();

    if (tope == nullptr)
    {
        fondo = nullptr;
    }

    delete aBorrar;
    return dato;
}


template <class T>  // Obtener el dato de la Cola sin eliminar el nodo
T Cola<T>::peek()
{
    if (esVacia())
    {
        throw 400;
    }

    return tope->getDato();
}

#endif // U04_COLAS_COLA_COLA_H_