#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("gymnastics.in","r",stdin);
    freopen("gymnastics.out","w",stdout);

    int k,n,consistentPairs=0;
    cin >> k >> n;
    vector<vector<int>> ranking(k,vector<int>(n,0));
    
    for(int i=0;i<k;i++){
        int alpha=1;
        for(int j=0;j<n;j++){
            int element;
            cin >> element;
            ranking.at(i).at(element-1)=alpha;
            alpha+=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            
            int prev_diff,curr_diff,counter=0;
            for(int p=0;p<k;p++){
               if(p==0){prev_diff=ranking.at(p).at(i)-ranking.at(p).at(j);counter+=1;} 
               else{
                   curr_diff = ranking.at(p).at(i)-ranking.at(p).at(j);
                   if(prev_diff*curr_diff>=0){
                       counter+=1;
                       prev_diff=curr_diff;
                   }
                   else{break;}
               }
            }
            if(counter==k){
                consistentPairs+=1;
            }
        }
    }
    cout << consistentPairs;

    return 0;
}
