#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("circlecross.in","r",stdin);
    freopen("circlecross.out","w",stdout);

    vector<char> alphabets={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string str;
    int crossings=0;
    cin >> str;

    for(int i=0;i<26;i++){
        char targetCharacter = alphabets.at(i);
        vector<int> targetPositions;
        for(int j=0;j<52;j++){
           if(str.at(j)==targetCharacter){targetPositions.push_back(j);} 
        }
        for(int j=i+1;j<26;j++){
          char currentCharacter = alphabets.at(j); 
          vector<int> currentPositions;
          for(int k=0;k<52;k++){
             if(str.at(k)==currentCharacter){
                currentPositions.push_back(k); 
             }
          }
          if(
             (currentPositions.at(0)>=targetPositions.at(0) && currentPositions.at(0)<=targetPositions.at(1))^
             (currentPositions.at(1)>=targetPositions.at(0)&& currentPositions.at(1)<=targetPositions.at(1))){
              crossings+=1;
          }
        }
    }

    cout << crossings;
    

    return 0;
}
