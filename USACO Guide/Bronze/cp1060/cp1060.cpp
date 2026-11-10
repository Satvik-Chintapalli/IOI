#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,averageFlower=0;
    cin >> n;
    vector<int> input(n);
    vector<int> prefixSum(n+1);
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    prefixSum[0]=0;
    for(int i=1;i<n+1;i++){
        prefixSum[i]=prefixSum[i-1]+input[i-1];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=prefixSum[j+1]-prefixSum[i];
            float average= (float) sum/(j-i+1);
            for(int k=i;k<=j;k++){
                if(input[k]==average){
                    averageFlower+=1;
                    break;
                }
            }
        }
    }
    cout << averageFlower;
    return 0;
}
