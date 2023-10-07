#include <iostream>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <iomanip>

using namespace std;

struct Ponto{

    int x;
    int y;

};

double determinarDistancia(double pt1,double pt2) {
    double deltaX = pt2 - pt1;
    double deltaY = pt2 - pt1;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}


double coordenadax;
double coordenaday;

int main (){
char adicionar = 'S',continuar = 'S';
vector<Ponto> pontos;
int contador = 1,pt1,pt2;

do
{
        cout << "Deseja adicionar um ponto?: S/N: ";
        cin >> adicionar;
        cout << endl;
    do
    {
        
        Ponto ponto;
        cout << "Informe o a posição X do ponto " << contador << ". no plano cartesiano: ";
        cin >> coordenadax;
        cout << "Informe o a posição Y do ponto " << contador << ". no plano cartesiano: ";
        cin >> coordenaday;
        ponto.x = coordenadax;
        ponto.y = coordenaday;
        pontos.push_back(ponto);
        contador++;
        cout << endl;

        cout << "Deseja adicionar mais um ponto?: S/N: ";
        cin >> adicionar;
        cout << endl;
    }while(adicionar == 'S' || adicionar == 's');
    
    
    int tam = pontos.size();

    cout << "Selecione 2 pontos para vericicar a distancia entre eles.\n\nPontos salvos:" << endl;

    for (int i = 0; i < tam; i++){
        cout << i + 1 << ". [" << pontos[i].x << "," << pontos[i].y << "]" << endl;
    }
    cout << endl;

    cout << "Primeiro ponto escolhido: ";
    cin >> pt1;
    cout << "Segundo ponto escolhido: ";
    cin >> pt2;
    cout << endl;

    pt1 = pt1 - 1;
    pt2 = pt2 - 1;

    cout << setprecision(3) << "A distância ente os pontos é de: " << determinarDistancia(pt1,pt2) << endl;
    cout << endl;

    cout << "Deseja continuar?: S/N: ";
    cin >> continuar;
    cout << endl;   
} while (continuar == 'S' || continuar == 's');
    
    return 0;
}