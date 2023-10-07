#include <iostream>

using namespace std;


double converterParaFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}


void entradaSaida() {
    double celsius;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    double fahrenheit = converterParaFahrenheit(celsius);

    cout << celsius << " graus Celsius é igual a " << fahrenheit << " graus Fahrenheit." << endl;
}

int main() {
    
    entradaSaida();

    return 0;
}
