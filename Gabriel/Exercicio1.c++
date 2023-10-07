#include <iostream>

using namespace std;


int calculaFatorial(int num){

int fatorial = num;
    for (int i = num; i > 2; i--){
       fatorial = fatorial * (i -1);
    }
    return fatorial;
}

int num1,num2,num3;

int main(){
    
    cout << "Forneça o primeiro numero: ";
    cin >> num1;
    cout << "Forneça o primeiro numero: ";
    cin >> num2;
    cout << "Forneça o primeiro numero: ";
    cin >> num3;
    cout << endl;

    cout << "O fatorial de " <<  num1 << " é " << calculaFatorial(num1) << endl;
    cout << "O fatorial de " <<  num2 << " é " << calculaFatorial(num2) << endl;
    cout << "O fatorial de " <<  num3 << " é " << calculaFatorial(num3) << endl;

    return 0;
}