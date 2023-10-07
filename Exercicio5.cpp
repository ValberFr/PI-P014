#include <iostream>
#include <string>

using namespace std;

struct CPU {
    string marca;
    int nucleos;
    double frequencia; 
};

struct RAM {
    string tipo;
    int capacidade; 
};


struct Armazenamento {
    string tipo;
    int capacidade; 
};


struct GPU {
    string marca;
    int memoria; 
};


struct SistemaOperacional {
    string nome;
    string versao;
};


struct Computador {
    CPU processador;
    RAM memoria;
    Armazenamento disco;
    GPU placaDeVideo;
    SistemaOperacional sistema;
};

int main() {
    Computador meuPc = {
        { "Intel", 8, 3.5 },            
        { "DDR4", 16 },                 
        { "SSD", 500 },                 
        { "NVIDIA", 6 },                
        { "Windows", "11 Pro" }         
    };

    cout << "Informacoes do Computador:\n";
    cout << "Processador: " << meuPc.processador.marca << ", Nucleos: " << meuPc.processador.nucleos << ", Frequencia: " << meuPc.processador.frequencia << " GHz" << endl;
    cout << "Memoria RAM: " << meuPc.memoria.tipo << ", Capacidade: " << meuPc.memoria.capacidade << " GB" << endl;
    cout << "Armazenamento: " << meuPc.disco.tipo << ", Capacidade: " << meuPc.disco.capacidade << " GB" << endl;
    cout << "Placa de Video: " << meuPc.placaDeVideo.marca << ", Memoria: " << meuPc.placaDeVideo.memoria << " GB" << endl;
    cout << "Sistema Operacional: " << meuPc.sistema.nome << ", Versao: " << meuPc.sistema.versao << endl;

    return 0;
}