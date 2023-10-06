#include <iostream>
#include <string>
using namespace std;
struct CPU {
    string marca;
    int nucleos;
    double frequencia; 
};





int main() {
    Computador meuPc = {
        { "Intel", 8, 3.5 },            //  CPU
        { "DDR4", 16 },                 // RAM
        { "SSD", 500 },                 // Armazenamento
        { "NVIDIA", 6 },                // GPU
        { "Windows", "11 Pro" }         // Sistema Operacional
    };

    cout << "Informacoes do Computador:\n";
    cout << "Processador: " << meuPc.processador.marca << ", Nucleos: " << meuPc.processador.nucleos << ", Frequencia: " << meuPc.processador.frequencia << " GHz" << endl;
    cout << "Memoria RAM: " << meuPc.memoria.tipo << ", Capacidade: " << meuPc.memoria.capacidade << " GB" << endl;
    cout << "Armazenamento: " << meuPc.disco.tipo << ", Capacidade: " << meuPc.disco.capacidade << " GB" << endl;
    cout << "Placa de Video: " << meuPc.placaDeVideo.marca << ", Memoria: " << meuPc.placaDeVideo.memoria << " GB" << endl;
    cout << "Sistema Operacional: " << meuPc.sistema.nome << ", Versao: " << meuPc.sistema.versao << endl;

    return 0;
}
