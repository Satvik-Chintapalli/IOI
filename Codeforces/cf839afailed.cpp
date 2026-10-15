#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,leftOver=0;

    cin >> n >> k;
   

    for(int i=0;i<n;i++){
        //cout << "Currently k value is : " << k << "\n";

        //cout << "value of k is: " << k << "\n";
        cout << "Currently i value is: "<<i<<"\n";

        int dayCandle;
        cin >> dayCandle;
        cout << dayCandle << "\n";
        if(dayCandle<8){
            candlesDistributed+=dayCandle;
            //cout << "Subtracted Day Candle , value of k is " << k << "\n";
        }
        else{
            candlesDistributed+=8;
            leftOver+=(dayCandle-8);
            cout << "In leftover candle " << "\n";
        }
        dayCandle+=leftOver;
        if(candlesDistributed>=k){
            cout << i+1 << "\n";
            //cout << "Inside k=0 " << "\n"; 
            break;
        }
        //cout << "In the end k value is : " << k << "\n";
        cout << "Candles distributed are: "<<candlesDistributed;
    }
    //cout << "Out k value is: " << k << "\n";
    if(candlesDistributed<=k){
        //cout << "At k!=0 " << "\n";

        cout << "-1";
    }


    return 0;
}
