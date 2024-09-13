#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra;
    int cont = 0;


    cout << "Digite uma palavra: ";
    getline(cin, palavra);


    for (int i = 0; i < palavra.length(); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'A') {
            cont++;
        }
    }


    if (cont > 0) {
        cout << "A letra 'a' ou 'A' ocorre " << cont << " vezes na palavra: " << palavra << endl;
    } else {
        cout << "A letra 'a' ou 'A' não foi encontrada na palavra: " << palavra << endl;
    }

    return 0;
}
