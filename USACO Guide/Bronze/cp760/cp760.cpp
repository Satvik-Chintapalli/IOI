#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shuffle.in","r",stdin);
    freopen("shuffle.out","w",stdout);

    int n;
    cin >> n;

    vector<int> shuffle(n);
    vector<int> ids(n);
    for(int i=0;i<n;i++){
        cin >> shuffle[i];
    }
    for(int i=0;i<n;i++){
        cin >> ids[i];
    }

    for(int i=0;i<3;i++){
        vector<int> pastOrder(n);
        for(int j=0;j<n;j++){
            pastOrder[j] = ids[shuffle[j]-1];
        }
        ids = pastOrder;
    } 
    for(int i=0;i<n;i++){
        cout << ids[i] << "\n";
    }

    return 0;
}
