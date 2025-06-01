#include <iostream>
#include <string>
#include <set>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int m;
        cin>>m;
        int s = 0;
        int prev = 0;
        int res = 0;
        for (int i= 0; i<m; i++){
            int e;
            cin>>e;
            if (i == 0){
                s = 1;
                res = 1;
            } else{
                if (e==prev || e==prev+1){
                    s += e-prev;
                    if (s>2){
                        s = 1;
                        res += 1;
                    }
                } else{
                    s = 1;
                    res+=1;
                }
            }
            prev = e;
        }
        cout<<res<<endl;
    }
  
}
