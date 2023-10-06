#include <iostream>

using namespace std;

double convertToFahrenheit(double C){
double convercao = 0;
    
    convercao = (C * 9/5) + 32;
    return convercao;
}

void imprimeConvercao(double C,double convercao){
    cout << C << "° celcius é igual a: " << convercao << "° fahrenheit." << endl; 
}

double celcius;

int main(){

    cout << "Forneça a temperatura em °C que deseja converter: ";
    cin >> celcius;
    cout << endl;
    
    convertToFahrenheit(celcius);
    imprimeConvercao(celcius,convertToFahrenheit(celcius));

    return 0;
}