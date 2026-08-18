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

int sumFormula(int n){
    int formula = n*(n+1)/2;
    return formula;
}

int fibonacciIterative(int n){
    int suma = 0;
    for(int i = 0; i<=0 ; i++){
        
    }

}

int main(){
    cout << "\n" << endl;
    // Suma Iterativa
    cout << "La suma iterativa de 5 es: " << sumIterative(5) << "\n" << endl;
    // Suma Recursiva
    cout << "La suma recursiva de 5 es: " << sumRecursive(5) << "\n" << endl;
    // Suma con Formula
    cout << "La suma de formula de 5 es: " << sumFormula(5) << "\n" << endl;
    // Suma con FibonacciIterative
    cout << "La suma de formula de 5 es: " << fibonacciIterative(5) << "\n" << endl;





}