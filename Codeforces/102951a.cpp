#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int &i : x){
        cin >> i;
    }
    for(int &i : y){
        cin >> i;
    }
    int maxDistance=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           int currentDistance; 
           currentDistance = pow(x.at(i)-x.at(j),2) + pow(y.at(i)-y.at(j),2); 
           maxDistance=max(currentDistance,maxDistance);
        }
    }
    cout << maxDistance;
    return 0;
}
