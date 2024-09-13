#include <iostream>
using namespace std;

int main() {
    int indice = 12, soma = 0, k = 1;


    while (k < indice) {
        k = k + 1;
        soma = soma + k;
    }


    cout << "O valor de soma é: " << soma << endl;

    return 0;
}
