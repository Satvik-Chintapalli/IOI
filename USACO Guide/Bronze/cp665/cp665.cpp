#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowsignal.in","r",stdin);
    int m,n,k;
    cin >> m >> n >> k;
    char signal[m][n];
    char amplifiedSignal[m*k][n*k];
 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin >> signal[i][j]; 
        } 
    }
    for(int i=0;i<m*k;i++){
        for(int j=0;j<n*k;j++){
            amplifiedSignal[i][j]=signal[i/k][j/k];
        }
    }
    freopen("cowsignal.out","w",stdout);

    for(int i=0;i<m*k;i++){
        for(int j=0;j<n*k;j++){
            cout << amplifiedSignal[i][j];
        }
        cout << "\n";
    }


    return 0;
}
