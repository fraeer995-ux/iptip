#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int students[1000];
    int size = 0;
    int result = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (size > 0 && students[size - 1] == x) {
            size=size-1;
            result += 2;
        } else {
            students[size] = x;
            size=size+1;
        }
    }

    cout << result;
    return 0;
}
