#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("triangles.in","r",stdin);
    freopen("triangles.out","w",stdout);

    int n,output=0;
    cin >> n;
    vector<vector<int>> coordinates(n,vector<int>(2,0));
    for(int i=0;i<n;i++){
        cin >> coordinates.at(i).at(0) >> coordinates.at(i).at(1);
    } 

    for(int i=0;i<n;i++){
        int horizontal=0,vertical=0;
        for(int j=0;j<n;j++){
                if(coordinates.at(i).at(1)==coordinates.at(j).at(1)){
                    horizontal = max(horizontal,abs(coordinates.at(i).at(0)-coordinates.at(j).at(0)));
                }
                if(coordinates.at(i).at(0)==coordinates.at(j).at(0)){
                      vertical = max(vertical,abs(coordinates.at(i).at(1)-coordinates.at(j).at(1)));         
                 }

        }
        output = max(output,horizontal*vertical);
    }
    cout << output;
    return 0;
}
