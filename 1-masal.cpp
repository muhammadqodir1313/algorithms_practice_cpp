#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    long long s=0;
    cin>>n;
    map<int, int> a;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        
        if(a[x]==0){
            s++;
            a[x]++;
        }
    }
    cout<<s;
    return 0;
}