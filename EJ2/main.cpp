#include <iostream>
using namespace std;

void impares(int n){//caso base
    if(n%2!=0){
        cout <<n<<",";
    }
    if(n<=0){
        return;
    }
    impares(n-1);
}

int main() {
    impares(10);
    return 0;
}
