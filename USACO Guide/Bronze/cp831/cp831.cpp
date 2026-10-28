#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("tttt.in","r",stdin);
    freopen("tttt.out","w",stdout);

    vector<vector<char>> board;
    vector<char> alphabets = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int i=0;i<3;i++){
        string str;
        cin >> str;
        for(int j=0;j<3;j++){
            board.at(i).at(j)=str.at(j);
        }
    }

    int singleWinner=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<26;j++){
            char current = alphabets.at(j);
            int columnCounter=0;
            int lrDiagonalCounter=0;
            int rlDiagonalCounter=0;
            if(board.at(i)==vector<char>{current,current,current}){
                singleWinner+=1;
            }
            for(int k=0;k<3;k++){
                if(board.at(k).at(i)==current){
                    columnCounter+=1;
                }
            }
            if(columnCounter==3){singleWinner+=1;}
            if(board.at(i).at(i)==current){
               lrDiagonalCounter+=1; 
            }
            if(lrDiagonalCounter==3){singleWinner+=1;}
            for(int k=2;k>=0;k++){
                if(board.at(i).at(k)==current){
                     rlDiagonalCounter+=1;
                }
            }
            if(rlDiagonalCounter==3){singleWinner+=1;}
        }

    }


    cout << singleWinner; 


    return 0;
}
