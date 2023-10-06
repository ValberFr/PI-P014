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

void atualizarTituloLivro(vector<Livro>& biblioteca) {
    cout << "\n=== Atualizando titulo do Livro ===";
    string tituloAtual, novoTitulo;
    cout << "\nDigite o titulo atual do livro: ";
    cin.ignore();
    getline(cin, tituloAtual);
    for (auto& livro : biblioteca) {
        if (livro.titulo == tituloAtual) {
            cout << "\nDigite o novo titulo para o livro: ";
            getline(cin, novoTitulo);
            livro.titulo = novoTitulo;
            cout << "Titulo atualizado com sucesso!\n";
            return;  // Encerra a função depois da atualizacao
        }
    }
    cout << "Livro nao encontrado!\n";
}

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



