#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,minimumLiars=0,match=false;
    cin >> n;

    vector<pair<string,int>> information(n);

    for(int i=0;i<n;i++){
        cin >> information.at(i).first >> information.at(i).second;
    }
    
    while(!match){
        vector<pair<string,int>> current = information;
        int k=0; 
        for(int i=0;i<n-1;i++){
           for(int p=0;p<n
           for(int j=0;j<minimumLiars;j++){
              current.erase(current.begin()+i);
           }
           int g_max=INT_MAX,l_min=0,valid=0;
           for(int k=0;k<current.size();k++){
              if(current.at(k).first=="G"){
                  if(current.at(k).second>g_max){break;}
                  else{
                     valid+=1;
                     l_min=max(l_min,current.at(k).second); 
                  }
              }
              else{
                  if(current.at(k).second<l_min){break;}
                  else{
                      valid+=1;
                      g_max=min(g_max,current.at(k).second);
                  }
              }
           }
           if(valid==current.size()){match=true;break;}
           k+=1;
        }
        if(!match){minimumLiars+=1;}
    }
    cout << minimumLiars;


    return 0;
}
