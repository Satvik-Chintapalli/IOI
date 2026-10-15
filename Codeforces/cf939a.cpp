#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    bool loveTriangle=false;
    cin >> n;
    int loves[n];

    for(int i=0;i<n;i++){
        cin >> loves[i];
    }

    for(int i=0;i<n;i++){
        int second_lover = loves[i];
        int third_lover = loves[second_lover-1];
        if(loves[third_lover-1]==i+1){
            loveTriangle = true;
            break;
        }
    }
    if(loveTriangle){cout<<"YES";}else{cout<<"NO";}


    return 0;
}
