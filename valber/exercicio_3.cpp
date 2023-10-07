#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Ponto {
    double x, y;
};

void calcularDistancia(Ponto ponto1, Ponto ponto2) {
    cout << "A distancia dos 2 pontos eh: " << fixed << setprecision(2) << sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2)) << endl;
}

int main() {
    Ponto ponto1, ponto2;
    
    cout << "Digite o X do primeiro ponto: ";
    cin >> ponto1.x;

    cout << "Digite o Y do primeiro ponto: ";
    cin >> ponto1.y;
    
    cout << "Digite o X do segundo ponto: ";
    cin >> ponto2.x;

    cout << "Digite o Y do segundo ponto: ";
    cin >> ponto2.y;
    
    calcularDistancia(ponto1, ponto2);
    
    return 0;
}