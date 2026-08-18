#include <iostream>
using namespace std;

double factorial(double n){
    if(n <= 1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    cout << "El factorial de 40 es: " << factorial(40) << endl;
    return 0;
}