#include <iostream>
using namespace std;
/*
int sum(int a, int b){
    return a + b;
};

int sum(double a, double b){
    return a + b;
};

string sum(string a , string b){
    return a + b;
    
};
*/

//Template hace todos los tipos de datos.
template <typename T>
T sum(T a, T b){
    return a + b;
}



int main(){
    string a = "hola ";
    string b = "crayola";
    cout << "La suma entre " << a << " y " << b << " es: " << sum(a,b) << endl;

    int c = 5;
    int d = 10;
    cout << "La suma entre " << c << " y " << d << " es: " << sum(c,d) << endl;

    double e = 5.5;
    double f = 10.5;
    cout << "La suma entre " << e << " y " << f << " es: " << sum(e,f) << endl;


    return 0;

}