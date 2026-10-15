#include <bits/stdc++.h>

using namespace std;

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,good=0,bad=0;
string path;
cin >> n;
cin >> path;

for(int i=1;i<n;i++){
if(path[i-1]=='S' && path[i]=='F'){good+=1;}
else if(path[i-1]==path[i]){}
else{bad+=1;}
}
if(good>bad){cout<<"YES";}
else{cout<<"NO";}
return 0;
}
