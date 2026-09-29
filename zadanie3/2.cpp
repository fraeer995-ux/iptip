#include <iostream>
using namespace std;

int main() {
    long long v, t;
    cin >> v >> t;
    cout << (v * t % 109 + 109) % 109;
    return 0;
}
