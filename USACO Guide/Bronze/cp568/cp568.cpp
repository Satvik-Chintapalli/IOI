#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("speeding.in","r",stdin);
    freopen("speeding.out","w",stdout);

    int n,m;
    cin >> n >> m;
    int limits[n][2];
    int actuals[m][2];

    for(int i=0;i<n;i++){
        cin >> limits[i][0] >> limits[i][1];
        if(i>0){limits[i][0]+=limits[i-1][0];}
    }
    for(int i=0;i<m;i++){
        cin >> actuals[i][0] >> actuals[i][1];
        if(i>0){actuals[i][0]+=actuals[i-1][0];}
    }
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){ //while(i<n || j<m){{ --> Mistake I made which can cause indexing error, though the submit was successful with this also.
       int limit = limits[i][0];
       int limitValue = limits[i][1];
       int actual = actuals[j][0];
       int actualValue = actuals[j][1];
       k = max(actualValue-limitValue,k);
       if(limit==actual){
           i+=1;j+=1;
       }
       else if(limit<actual){
          i+=1;
       }
       else{
          j+=1; 
       }
    }

    cout << k << "\n";


    return 0;
}
