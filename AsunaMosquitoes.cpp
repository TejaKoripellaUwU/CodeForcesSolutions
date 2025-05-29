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
            for (int y = 0; y<e.size();y++){
                if (o.size()>0){
                    max_odd += o.top();
                    o.pop();
                }
                max_odd += e[y];
            }
                
            cout<<max_odd<<endl;
        }
    }
  
}
