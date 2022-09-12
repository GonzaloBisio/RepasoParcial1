#include <iostream>

//
// Created by gonzalo on 12/09/22.
//
unsigned int impares(unsigned int n){
    //condicion base
    if(n == 0) return 1;
    //llamada recursiva
    if(n % 2 == 0) return n;
    return impares(n -1);
}

int main() {

    int n;
    std::cin>>n;
    std::cout<<impares(n);
}