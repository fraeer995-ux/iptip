#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a + (b - a) * ((b - a + 1000) / 1001);
    return 0;
}
