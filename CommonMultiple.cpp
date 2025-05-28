#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int len;
        cin >> len;
        set<int> s;
        for (int i = 0; i<len; i++){
            int b;
            cin>>b;
            s.insert(b);
        }
        cout<< s.size()<<endl;
    }
}
