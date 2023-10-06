#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Livro {
    string titulo;
    int numeroPagina;
    string autor;
    int anoPublicacao;
};






int main() {
    vector<Livro> biblioteca;

    while (true) {
        cout << endl << "==== Menu Principal ==== " << endl;

        cout << "1. Adicionar livro " << endl;
        cout << "2. Listar livros" << endl;
        cout << "3. Pesquisar livro" << endl;
        cout << "4. Atualizar titulo de livro" << endl;
        cout << "5. Remover livro" << endl;
        cout << "0. Sair." << endl;
        cout << "Escolha uma opcao: ";

        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarLivro(biblioteca);
                break;
            case 2:
                listarLivros(biblioteca);
                break;
            case 3:
                pesquisarLivro(biblioteca);
                break;
            case 4:
                atualizarTituloLivro(biblioteca);
                break;
            case 5:
                removerLivro(biblioteca);
                break;
            case 0:
                cout << "Programa finalizado!" << endl;
                return 0;
            default:
                cout << "Informe uma opcao valida!" << endl;
                break;
        }
    }

    return 0;
}



