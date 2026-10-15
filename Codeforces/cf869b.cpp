#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,result=1;
    cin >> a >> b;

    if(a==b){}
    else{
    
    if(b-a-1>(b-(b/10)*10)){
        result=0;
    }
    else{
        int unit_a=a-(a/10)*10;
        int unit_b=b-(b/10)*10;
        
        if(unit_b<=unit_a){
            result =0;
        }
        for(int i=unit_b;i>unit_a;i--){
            result*=i;
        }
    }
    }
    
    cout << result-(result/10)*10;

    



    return 0;
}
