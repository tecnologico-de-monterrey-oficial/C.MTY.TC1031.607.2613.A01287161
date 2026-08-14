#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
};

int main(){
    int a = 5;
    int b = 10;
    cout << "La suma entre " << a << " y " << b << " es: " << sum(a,b) << endl;
    return 0;

}