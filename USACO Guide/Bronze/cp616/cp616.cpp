#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cbarn.in","r",stdin);
    freopen("cbarn.out","w",stdout);

    int n;
    cin >> n;
    vector<int> choices(n);
    for(int &i:choices){
        cin >> i;
    }
    int previousSum = INT_MAX;

    int minSum = previousSum;
    for(int i=0;i<n;i++){
        int currentSum=0;
        int k=1;
        
        for(int j=1;j<n;j++){
            /*
            if(j>n-1){
                j-=n;
            }
            */
            int index=(i+j)%n;
            currentSum+=(choices.at(index)*k);
            k++;
        }

        minSum = min({minSum,currentSum,previousSum});
        previousSum = currentSum;
    }
    cout << minSum << "\n";
    return 0;
}
