#include <bits/stdc++.h>

using namespace std;

void vectorOutput(){

    

}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numberOfTestCases;

    vector<int> testCaseResults(numberOfTestCases);

    for(int i=0; i<numberOfTestCases;i++){

        int numberOfWins;
        vector<int> deck;
        int n,k,p,m;
        cin >> n >> k >> p >> m;
        for(int j=0;j<n;j++){

            int input;
            cin >> input;
            deck.push_back(input);
        }

        if(k>=p){

            numberOfWins +=1;
            deck.push_back(deck[p-1])
            deck.erase(deck[p-1])
        }
    }


    return 0;
}
