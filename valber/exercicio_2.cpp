#include <iostream>

using namespace std;

double converte_celsius_para_fahrenheit(double celsius) {
    double fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}

void testaCelsius() {
    double celsius1 = 90, celsius2 = 30, celsius3 = 21.2;

    double fahrenheit1 = converte_celsius_para_fahrenheit(celsius1);
    double fahrenheit2 = converte_celsius_para_fahrenheit(celsius2);
    double fahrenheit3 = converte_celsius_para_fahrenheit(celsius3);

    cout << celsius1 << " Celsius equivalem a " << fahrenheit1 << " Fahrenheit." << endl;
    cout << celsius2 << " Celsius equivalem a " << fahrenheit2 << " Fahrenheit." << endl;
    cout << celsius3 << " Celsius equivalem a " << fahrenheit3 << " Fahrenheit." << endl;

    cout << "Digite uma temperatura em Celsius para saber o valor em Fahrenheit: ";
    cin >> celsius1;

    fahrenheit1 = converte_celsius_para_fahrenheit(celsius1);
    cout << celsius1 << " Celsius equivalem a " << fahrenheit1 << " Fahrenheit." << endl;
}

int main() {
    testaCelsius();

    return 0;
}
