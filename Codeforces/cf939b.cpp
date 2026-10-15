#include <bits/stdc++.h>

using namespace std;
using ll= long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N,K;// 120 7
    int correctChoiceIndex;
    cin >> N >> K;
    ll choices[K];//109 92 38 38 49 38 92
    for(int i=0;i<K;i++){
        cin >> choices[i];
    }
    int counter=0;
    for(int i=0;i<K;i++){
        for(int j=i+1;j<K;j++){
            cout << "remainder by " << choices[i] << " is " << N%choices[i] << "\n";
            cout << "remainder by " << choices[j] << " is " <<N%choices[j] << "\n";
            if(N%choices[i]<=N%choices[j]){
                counter+=1;
                cout << choices[i] << " is better than " << choices[j] << "\n";
            }
            else{
                break;
                counter = 0;
            }
        }
        if(counter==K-i-1){
            correctChoiceIndex = i;
            break;
        }
    }

    cout << correctChoiceIndex+1 << " " << N/choices[correctChoiceIndex];

    return 0;
}
