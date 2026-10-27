#include <bits/stdc++.h>

using namespace std;

void inputter(vector<vector<int>>& function,int n,int m){
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        for(int j=0;j<m;j++){
            if(str.at(j)=='A'){function.at(j).at(0)=1;}
            if(str.at(j)=='C'){function.at(j).at(1)=1;}
            if(str.at(j)=='G'){function.at(j).at(2)=1;}
            if(str.at(j)=='T'){function.at(j).at(3)=1;}
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cownomics.in","r",stdin);
    freopen("cownomics.out","w",stdout);

    int n,m,counter=0;
    cin >> n >> m;

    vector<vector<int>> spotty(m,vector<int>(4,0));
    vector<vector<int>> normal(m,vector<int>(4,0));
    inputter(spotty,n,m);
    inputter(normal,n,m);
    for(int i=0;i<m;i++){
        int letter_count=0;
        for(int j=0;j<4;j++){
            if(spotty.at(i).at(j)==normal.at(i).at(j)&&(spotty.at(i).at(j)!=0 || normal.at(i).at(j)!=0)){break;}
            else{letter_count+=1;}
        }
        if(letter_count==4){counter+=1;}
    } 
    cout << counter;
    return 0;
}
