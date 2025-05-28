#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s = "";
        for (int i = 0; i < 4; i++) {
            char c;
            cin >> c;
            s += c;
        }

        int m = stoi(s);
        int root = (int)sqrt(m);
        if (sqrt(m) == 0){
          cout << 0 << " "<< 0 << endl;
        }
        else if (root * root == m) {
            cout << 1 << " " << root - 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
 