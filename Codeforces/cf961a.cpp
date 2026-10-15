#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    int counter=0;
    cin >> n >> m;
    int choices[m];
    int numberOfChoices[n];

    for(int i=0;i<m;i++){
        cin >> choices[i];
    }
    for(int i=0;i<n;i++){
        numberOfChoices[i]=0;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(choices[j]==i+1){
                numberOfChoices[i]+=1;
            }
        }
    }
    int current=numberOfChoices[0];
    int winner;
    for(int i=1;i<n;i++){
        if(current>=numberOfChoices[i]){
            winner = numberOfChoices[i];
        }
        else{
            winner = current;
        }
            current = numberOfChoices[i];
    }
    if(n==1){
        winner = numberOfChoices[0];
    }
    cout << winner;

    return 0;
}
