#include <iostream>
#include <cmath>
using namespace std;


struct Ponto {
    double x;
    double y;
};


double calcularDistancia(Ponto p1, Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    
    Ponto ponto1 = {2.0, 3.0};
    Ponto ponto2 = {5.0, 7.0};

    
    double distancia = calcularDistancia(ponto1, ponto2);

    
    cout << "A distância entre os pontos (" << ponto1.x << ", " << ponto1.y << ") e (" << ponto2.x << ", " << ponto2.y << ") é: " << distancia << endl;

    return 0;
}
