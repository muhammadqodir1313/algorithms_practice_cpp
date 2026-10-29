#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin>>n;
    int s=0;

    map<int, int> a;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    for(auto p:a){
        if (p.second==1){
            cout<<p.first<<" ";
            s++;
        }
    }
    if (s==0){
        cout<<"-1";
    }
    return 0;
}