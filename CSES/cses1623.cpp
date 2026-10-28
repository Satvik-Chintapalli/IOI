#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
vector<ll> weights;
ll calculator(ll g1,ll g2,int i){ 
    if(i==n){return abs(g1-g2);}

    return min(calculator(g1+weights.at(i),g2,i+1),calculator(g1,g2+weights.at(i),i+1));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    weights.resize(n);

    for(auto &i : weights){
        cin >> i;
    }

    cout << calculator(0,0,0);


    return 0;
}
