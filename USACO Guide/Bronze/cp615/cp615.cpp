#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);

    int x,y,m,max_milk=0;
    cin >> x >> y >> m;

    int a_limit = m/x;
    int b_limit = m/y;
    for(int a=a_limit;a>-1;a--){ 
        for(int b=b_limit;b>-1;b--){
            int sum = x*a+y*b;
            if(sum<=m){
               max_milk = max(max_milk,sum); 
            }
        }
    }
    cout << max_milk;


    return 0;
}
