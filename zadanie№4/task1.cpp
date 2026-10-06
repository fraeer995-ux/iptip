#include <iostream>
using namespace std;

int main() {
    long long a, b;
    char operation;
    cin >> a >> operation >> b;

    switch (operation) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
    }

    return 0;
}
