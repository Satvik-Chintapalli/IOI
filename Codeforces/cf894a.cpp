#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string text;
    int counter=0;
    cin >> text;

    vector <char> sequence;

    for(int i=0;i<text.length();i++){
        if(text.at(i)=='Q' || text.at(i)=='A'){
            sequence.push_back(text.at(i));
        }
    }

    for(int i=0;i<sequence.size();i++){
        if(sequence.at(i)=='Q'){
           for(int j=i+1;j<sequence.size();j++){
              if(sequence.at(j)=='A'){
                 for(int k=j+1;k<sequence.size();k++){
                    if(sequence.at(k)=='Q'){
                        counter+=1;
                    }
                 }
              }
           }
        }
    }
    cout << counter << "\n";
    return 0;
}
