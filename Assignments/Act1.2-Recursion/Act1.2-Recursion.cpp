// Joaquinín López Holguín
//A01287161

#include <iostream>
using namespace std;

int sumIterative(int n){
    int suma = 0;
    for(int i = 1; i <= n; i++){
        suma += i;
    }
    return suma;
}

int sumRecursive(int n){
    if(n <= 1){
        return 1;
    }
    return n + sumRecursive(n-1);
}

int main(){
    // Suma Iterativa
    cout << "La suma iterativa de 5 es: " << sumIterative(5) << "\n" << endl;
    // Suma Recursiva
    cout << "La suma recursiva de 5 es: " << sumRecursive(5) << "\n" << endl;




}