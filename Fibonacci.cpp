#include <iostream>
using namespace std;


bool Fibonacci(int n) {
    if (n == 0 || n == 1) {
        return true;
    }
    
    int a = 0, b = 1, c = 0;
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }
    
    return (c == n);
}

int main() {
    int num;
    
    cout << "Digite um número: ";
    cin >> num;
    
    if (Fibonacci(num)) {
        cout << num << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << num << " não pertence à sequência de Fibonacci." << endl;
    }
    
    return 0;
}
