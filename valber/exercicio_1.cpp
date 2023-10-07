#include <iostream>

using namespace std;

void fatorial(int numero) {
    int fat = 1;
    for(int i = 1; i <= numero; i++) {
        fat *= i;
    }

    cout << "Fatorial de " << numero << " eh: " << fat << endl;
}

int main() {

    fatorial(5);
    fatorial(2);
    fatorial(7);

    return 0;
}