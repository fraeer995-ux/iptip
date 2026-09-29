#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ostatok = (n % 2 + 2) % 2;
    cout << n + 2 - ostatok;
    return 0;
}
