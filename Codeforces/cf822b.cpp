#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;//4 10
    string s,t;// abcd ebceabazcd
    vector<vector<int>> ans;
    cin >> n >> m >> s >> t ;
    cout << n << m << s << t ;
    

    for(int i=0;i<m;i++){
        if(s.at(0)==t.at(i)){
            ans.push_back({0,i});
        }
    } 
    // ans = {{0,4},{0,6}}
    cout << "clear till here" << "\n";
    
    for(int i=0;i<ans.size();i++){
        for(int j=ans[i][1]+1;j<m;j++){
            if(s.at(i+1)==t.at(j)){
                ans[i][0]+=1;
                ans[i].push_back(j-ans[i][1]+1);
            }
        }
    }
    
    for(int i=0;i<ans.size();i++){
       bool lowest=true;
       for(int j=i+1;j<ans.size();j++){
           if(ans[i][0]<=ans[j][0]){}
           else{
               lowest = false;
           }
       }
       if(lowest){
           k=ans[i][0];
           cout << k << "\n";
           int j=2;
           while(2<=j<ans.size()){
               cout << ans[i][j] << " " ;
           }
           break;
       }

    }
    
    return 0;
}
