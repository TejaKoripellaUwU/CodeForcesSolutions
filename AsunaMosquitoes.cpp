#include <iostream>
#include <string>
#include <set>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        vector<int> e;
        priority_queue<int> o;
        int max_odd = 0;
        int max_num = 0;
        int n;
        cin>>n;
        for (int i = 0; i<n; i++){
            int c;
            cin>>c;
            if (c>max_num){
                max_num = c;
            }
            if (c%2 == 0){
                e.push_back(c);
            } else{
                o.push(c);
            }
        }
        if (o.size() == 0 || e.size() == 0){
            cout<<max_num<<endl;
        }
        else{
            int h = o.top();
            o.pop();
            for (int y = 0; y<e.size();y++){
                h += e[y];
            }
            o.push(h);
            while(o.size()!=1 && o.size()!=2){
                int w;
                for (int x=0; x<3; x++){
                    w+=o.top();
                    o.pop();
                }
                cout<<o.size()<<endl;
                o.push(w);
            }
            cout<<o.top()<<endl;
        }
    }
  
}
