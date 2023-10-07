#include <iostream>

using namespace std;


int calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    
    int num1 = 5;
    int num2 = 7;
    int num3 = 10;

    cout << "Fatorial de " << num1 << " é: " << calcularFatorial(num1) << endl;
    cout << "Fatorial de " << num2 << " é: " << calcularFatorial(num2) << endl;
    cout << "Fatorial de " << num3 << " é: " << calcularFatorial(num3) << endl;

    return 0;
}
