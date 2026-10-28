#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);

    int n;
    cin >> n;
    int startMinChange=0,startMin,startMaxChange=0,startMax;
    int endMinChange=0,endMin,endMaxChange=0,endMax;
    vector<string> types(n);
    vector<vector<int>> measures(n,vector<int>(2,0));
    for(int i=0;i<n;i++){
        string type;
        int min,max;
        cin >> type >> min >> max;
        types.at(i) = type;
        measures.at(i).at(0)=min;measures.at(i).at(1)=max;
    }

    for(int i=0;i<n-1;i++){
        if(types.at(i)=="none" && types.at(i+1) == "none"){
            types.erase(types.begin()+i+1);
            measures.at(i).at(0) = max(measures.at(i).at(0),measures.at(i+1).at(0));
            measures.at(i).at(1) = min(measures.at(i).at(1),measures.at(i+1).at(1));
            measures.erase(measures.begin()+i+1);
        }
    }
     for(int i=0;i<types.size();i++){
       if(types.at(i)=="on"){
           startMinChange += measures.at(i).at(0);
           startMaxChange += measures.at(i).at(1);
       }
       if(types.at(i)=="off"){
           startMinChange -= measures.at(i).at(1);
           startMaxChange -= measures.at(i).at(0);
       }
       if(types.at(i)=="none"){
          startMin = measures.at(i).at(0) - startMinChange;
          startMax = measures.at(i).at(1) - startMaxChange;
          break;
       } 
    } 

    for(int i=types.size()-1;i>0;i--){
       if(types.at(i)=="on"){
           endMinChange -= measures.at(i).at(0);
           endMaxChange -= measures.at(i).at(1);
       }
       if(types.at(i)=="off"){
           endMinChange += measures.at(i).at(1);
           endMaxChange += measures.at(i).at(0);
       }
       if(types.at(i)=="none"){
          endMin = measures.at(i).at(0) - endMinChange;
          endMax = measures.at(i).at(1) - endMaxChange;
          break;
       } 
    }    
    cout << startMin << " " << startMax << "\n";
    cout <<  endMin << " " << endMax << "\n";

    return 0;
}
