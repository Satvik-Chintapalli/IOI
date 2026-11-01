#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    
    vector<ll> inputs(n+1);
    for(int i=1;i<n+1;i++){
        cin >> inputs[i];
    }
    for(int i=n;i>0;i--){
        inputs[i]-=inputs[i-1];
    }

    for(int i=0;i<m;i++){
        int l,r,x;
        cin >> l >> r >> x;
        inputs[l]+=x;
        if(r!=n){
           inputs[r+1]-=x;
        }
    }
    for(int i=1;i<n+1;i++){
        inputs[i]+=inputs[i-1];
        cout << inputs[i] << " ";
    }

    return 0;
}
