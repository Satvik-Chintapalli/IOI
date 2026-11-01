#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> inputs(n);
    for(int i=0;i<n;i++){
       cin >> inputs[i]; 
    }
    cout << inputs[0] << " ";
    for(int i=1;i<n;i++){
        inputs[i]+=inputs[i-1];
        cout << inputs[i] << " ";
    }
    return 0;
}
