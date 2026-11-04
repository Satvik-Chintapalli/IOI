#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int counter=1;
    cin >> n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    sort(input.begin(),input.end());
    for(int i=1;i<n;i++){
       if(input[i-1]!=input[i]){counter+=1;} 
    }
    cout << counter;
    return 0;
}
