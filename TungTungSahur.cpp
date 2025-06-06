#include <iostream>
#include <string>
using namespace std;

int main() {
    int r;
    cin >> r;
    cin.ignore();

    while (r--) {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        int p1 = 0, p2 = 0;
        bool valid = true;

        while (p1 < s1.size() && p2 < s2.size()) {
            if (s1[p1] != s2[p2]) {
                valid = false;
                break;
            }

            char ch = s1[p1];

            int cnt1 = 0;
            while (p1 < s1.size() && s1[p1] == ch) {
                cnt1++;
                p1++;
            }

            int cnt2 = 0;
            while (p2 < s2.size() && s2[p2] == ch) {
                cnt2++;
                p2++;
            }

            if (cnt2 < cnt1 || cnt2 > 2 * cnt1) {
                valid = false;
                break;
            }
        }

        if (p1 != s1.size() || p2 != s2.size()) valid = false;

        cout << (valid ? "YES" : "NO") << endl;
    }

    return 0;
}
