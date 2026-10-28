#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,averageFlower=0;
    cin >> n;
    vector<int> input(n);
    for(int i : input){
        cin >> i;
    }
    for(int i=0;i<n;i++){
        int sum=0;
        bool loop=true;
        for(int j=i;j<n;j++){
           sum+=input.at(j);
           int average= (float)sum/(j-i+1);
           for(int k=i;k<j;k++){
              if(input.at(k)==average){
                 averageFlower+=1;
              }
           }
        }
    }
    cout << averageFlower;
    return 0;
}
