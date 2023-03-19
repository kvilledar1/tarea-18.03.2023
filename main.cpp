#include <iostream>
using namespace std;

int factorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> num;
    cout << "El factorial de " << num << " es " << factorial(num);
    return 0;
}
