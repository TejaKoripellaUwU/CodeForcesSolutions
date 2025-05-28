#include <iostream>
#include <string>
#include <set>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int len;
        cin >> len;
        priority_queue<int> a;
        priority_queue<int> b;
        int z = 0;
        for (int i = 1; i<len+1; i++){
            char n;
            cin>>n;
            if (n == 'B'){
                if (i == 1){
                    z = 1;
                }
                b.push(i);
            } else{
                a.push(i);
            }
        }
        int hca;
        int hcb;
        
        if (a.size() == 0){
            hca = -1;
        } else{
            hca= a.top();
        }
        if (b.size() == 0){
            hcb = -1;
        } else{
            hcb= b.top();
        }
        if (z == 0 && hcb == len && b.size() == 1){
            cout<<"Alice"<<endl;
        }else if (hca == len && hcb == 1 && a.size()== 1){
            cout<<"Bob"<<endl;
        }
        else if (z == 0 && hca>hcb){
            cout<<"Alice"<<endl;
        } else if (z == 1 && hca > hcb){
            a.pop();
            if (a.size()==0){
                cout<<"Bob"<<endl;
            } else if (b.size() == 0){
                cout<<"Alice"<<endl;
            }
            else if (a.top()>b.top()){
                cout<<"Alice"<<endl;
            }else{
                cout<<"Bob"<<endl;
            }
        } else{
            cout<< "Bob"<< endl;
        }
    }
}
