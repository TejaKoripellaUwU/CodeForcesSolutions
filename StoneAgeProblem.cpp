#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    int q;
    long long total = 0;
    int prev = 0;
    map <int, int> v;
    cin >> n >> q;
    for (int i = 0; i<n; i++){
        int g;
        cin >> g;
        v[i] = g;
        total += g;
    }
    while (q--){
        int s;
        cin >> s;
        if (s == 1){
            int w;
            int u;
            cin>>w>>u;
            if (v.count(w-1)){
                total += u-v[w-1];
            } else{
                total += u-prev;
            }
            v[w-1] = u;
        } else {
            int p;
            cin >>p;
            v = map<int,int>();
            prev = p;
            total = 1LL* n*p;
        }

        cout<<total<<endl;
    }
}
