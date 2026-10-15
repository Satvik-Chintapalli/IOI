#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int numberOfWays=0;
    cin >> n;

    for(int i=1;i<n;i++){
        if((n-i)%i==0){
            numberOfWays+=1;
        }
    }
    cout << numberOfWays << "\n";

    return 0;
}
