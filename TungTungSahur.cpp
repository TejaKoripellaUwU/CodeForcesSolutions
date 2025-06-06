#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string q;
    getline(cin,q);
    int r = stoi(q);
    while (r--) {
        string s1 = "";
        getline(cin, s1);
        string s2 = "";
        getline(cin,s2);
        int p = 0;
        bool f = true;
        if (s1.size()>s2.size()){
            cout<<"NO"<<endl;
        } else{
            for (int i = 0; i<s1.size(); i++){
                if (i == 0 && s2[p] != s1[i]){
                    cout<<"NO"<<endl;
                    f = false;
                    break;
                }
                if (s2[p] != s1[i]){
                    if (p+1 < s2.size() && s2[p+1] == s1[i]){
                        p+=1;
                    } else{
                        cout<<"NO"<<endl;
                        f = false;
                        break;
                    }
                }
                p+=1;
            }
            if (f){
                if (p<s2.size()){
                    
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }
            }
        }

    }
}