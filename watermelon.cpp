#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;
    if (num > 2 && num % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
