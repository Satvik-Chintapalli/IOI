#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("lifeguards.in","r",stdin);
    freopen("lifeguards.out","w",stdout);

    int n,uptime=0;
    cin >> n;

    vector<vector<int>> lifeguards(n,vector<int>(2,0));

    for(int i=0;i<n;i++){
        cin >> lifeguards.at(i).at(0) >> lifeguards.at(i).at(1);
    }

    for(int i=0;i<n;i++){
        if(n==1){
            uptime = lifeguards.at(i).at(1) - lifeguards.at(i).at(0);
            break;
        }
        int currentUptime=0;
        vector<vector<int>> currentLifeguards = lifeguards;
        currentLifeguards.erase(currentLifeguards.begin()+i);
        int t=0;
        while(t<1001){
           for(int j=0;j<n-1;j++){
              if(t>currentLifeguards.at(j).at(0) && t<=currentLifeguards.at(j).at(1)){
                  currentUptime+=1;
                  break;
              }
           }
           t+=1;
        }
        uptime = max(uptime,currentUptime);
    }
    cout << uptime;
    return 0;
}
