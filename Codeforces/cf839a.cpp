#include <bits/stdc++.h>
// Previously I made the mistake of not resetting leftout to 0 at candle<8
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;

        int leftover=0;
    for(int i=0;i<n;i++){

        int candle;
        cin >> candle;
        candle+=leftover;

        if(candle<8){k-=candle; leftover=0;}
        if(candle>=8){k-=8;leftover=(candle-8);}

        if(k<=0){

            cout << i+1;

            break;
        }
        


    }
    if(k>0){cout << "-1";}



    return 0;
}
