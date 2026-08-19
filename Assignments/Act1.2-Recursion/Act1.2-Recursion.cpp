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
    return n*(n+1)/2;
}

int fibonacciIterative(int n){
    int a = 1;
    int b = 1;
    int c;
    for(int i = 3; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }
    return b;
}

int fibonacciRecursive(int n){
    if(n <= 2){
        return 1;
    }
    return fibonacciRecursive(n-1)+fibonacciRecursive(n-2);
}

int bacteriasIterative(int n){
    double born = 3.78, dead = 2.34;
    int sum = 1;
    for(int i = 1; i <= n; i++){
        int bacborn = sum * born;
        int bacdead = sum * dead;
        sum += bacborn - bacdead;
    }
    return sum;
}

int bacteriasRecursive(int n){
    if(n == 0){
        return 1;
    }
    int bacteria = bacteriasIterative(n-1);
    int born = bacteria * 3.78, dead = bacteria * 2.34;
    return bacteria + born - dead;

}

double investmentIterative(double cantidad, int n){
    float porcentaje = .1875;
    for(int i = 1; i<=n; i++){
       cantidad = cantidad + (cantidad * porcentaje);
    }
    return cantidad;
}

double investmenRecursive(double cantidad, int n){
    if(n<=0){
        return cantidad;
    }
    return investmenRecursive(cantidad * 1.1875, n - 1);
    
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
    cout << "La suma de fibonacci iterativa de 5 es: " << fibonacciIterative(5) << "\n" << endl;
    // Suma con FibonacciRecursive
    cout << "La suma de fibonacci recursiva de 5 es: " << fibonacciRecursive(5) << "\n" << endl;
    // BacteriasIterative
    cout << "BacteriasIterative es: " << bacteriasIterative(5) << "\n" << endl;
    // BacteriasRecusrive
    cout << "BacteriasRecusrive es: " << bacteriasRecursive(5) << "\n" << endl;
    // investmentIterative
    cout << "investmentIterative es: " << investmentIterative(500,2) << "\n" << endl;
    // investmentRecursive
    cout << "investmentRecursive es: " << investmenRecursive(500, 2) << "\n" << endl;






}