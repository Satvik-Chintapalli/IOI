#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("blist.in","r",stdin);
    freopen("blist.out","w",stdout);

    int n;
    int max_time = 1000;
    int maximum_buckets=0;
    int current_buckets=0;
    cin >> n;

    vector<int> s(n);
    vector<int> t(n);
    vector<int> b(n);
    vector<int> change(max_time+1);
    for(int i=0;i<n;i++){
        cin >> s[i] >> t[i] >> b[i];
        change[s[i]] += b[i];
        change[t[i]] -= b[i];
    }
    for(int t=0;t<=max_time+1;t++){
       current_buckets+=change[t];
       maximum_buckets = max(current_buckets,maximum_buckets);
    }
    cout << maximum_buckets << "\n";

    return 0;
}
