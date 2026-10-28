#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("diamond.in","r",stdin);
    freopen("diamond.out","w",stdout);

    int n,k,maxDiamonds=0;
    cin >> n >> k;
    vector<int> inputs(n);
    for(int &i : inputs){
        cin >> i;
    }
    for(int i=0;i<n;i++){
        int current=0,minimum=inputs.at(i)-k,maximum=inputs.at(i)+k;
        for(int j=0;j<n;j++){
            if(minimum<=inputs.at(j) && inputs.at(j)<=maximum){
                current+=1;
                minimum = max(minimum,inputs.at(j)-k);
                maximum = min(maximum,inputs.at(j)+k);
            }
        }
        maxDiamonds = max(maxDiamonds,current);
    }
    cout << maxDiamonds;

    return 0;
}
