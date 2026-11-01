#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin >> n >> q;
    
    vector<ll> inputs(n+1);
    for(int i=1;i<n+1;i++){
        cin >> inputs[i];
        inputs[i]+=inputs[i-1];
    }
    for(int i=0;i<q;i++){
        int l,r;
        cin >> l >> r;
        cout << inputs[r]-inputs[l-1] << "\n";
    }
    return 0;
}
