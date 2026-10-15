#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    string s;

    cin >> n >> m >> s;
    int l[m],r[m];
    char c1[m],c2[m];

    for(int i=0;i<m;i++){
        cin >> l[i] >> r[i] >> c1[i] >> c2[i];        
    }
    for(int i=0;i<m;i++){
       for(int j=l[i]-1;j<r[i];j++){
            if(s.at(j)==c1[i]){
                s.at(j)=c2[i];
            }
        }
    }
   
    cout << s << "\n";


    return 0;
}
