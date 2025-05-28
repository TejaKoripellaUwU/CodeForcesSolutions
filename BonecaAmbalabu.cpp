#include <iostream>
#include <string>
#include <set>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        vector<int>m;
        for (int i = 0; i<n;i++){
            int h;
            cin>>h;
            m.push_back(h);
        }

        long long max = 0;
        for (auto e:m){
            long long count = 0;
            for (auto y:m){
                long long val = e^y;
                count += val;
            }
            if (count>max){
                max = count;
            }
        }
        std::cout<<max<<endl;
    }
  
}
