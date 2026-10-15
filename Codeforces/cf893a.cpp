#include <bits/stdc++.h>

using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int choices[3] = {1,2,3};
    cin >> n;
    bool possible = true;
    int winner[n],spectator[n];
    spectator[0]=3;
    for(int i=0;i<n;i++){
        cin >> winner[i];
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            if(winner[i-1]==choices[j]||spectator[i-1]==choices[j]){}
            else{spectator[i]=choices[j];}
        }
    }
    for(int i=0;i<n;i++){
        if(spectator[i]==winner[i]){
            possible = false;
        }
    }
    if(possible){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }

    return 0;
}
