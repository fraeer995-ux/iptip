#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long h = n / 3600;
    long long m = n / 60 % 60;
    long long s = n % 60;
    cout << h << ':' << setfill('0') << setw(2) << m << ':' << setw(2) << s;
    return 0;
}
