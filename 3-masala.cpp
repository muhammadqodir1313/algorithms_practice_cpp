#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    int engKop=0;
    int javob=0;
    cin>>n;

    map<int, int> a;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    for(auto p:a){
        if (p.second>engKop){
            engKop=p.second;
            javob=p.first;
        }
    }
    cout<<javob<<" "<<engKop; 
    return 0;
}