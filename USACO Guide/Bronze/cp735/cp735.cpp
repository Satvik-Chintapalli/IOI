#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("lostcow.in","r",stdin);
    freopen("lostcow.out","w",stdout);

    int x,y;
    cin >> x >> y;
   
    bool loop=true;
    int i=0,distance=0;
    while(loop){
        if((x+pow(-2,i)-y)*(x-y)>0){
           distance+=pow(2,i+1); 
        }
        else{distance+=abs(y-x);loop=false;}
        i++;
    }
    cout << distance << "\n";
    return 0;
}
