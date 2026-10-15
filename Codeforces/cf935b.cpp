#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    int X1=0,X2=0;
    int X=0,Y=0;
    int coins = 0;
    int length;

    cin >> length;
    cin >> input;

    for(int i=0;i<length;i++){

        
        char term = input.at(i);
        if(term=='R'){
            X+=1;
        }
        else{
            Y+=1;
        }

        if(X==Y && i<length-1){

            if(input.at(i+1)==term){
                coins +=1;
            }

        }
        
    }


    cout << coins;



    

    return 0;

}
