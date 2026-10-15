#include <bits/stdc++.h>

// The mistake made is not considering the case where one of the trial is just the correct option. So the addition I made is to check if the currentInput== correctPassword

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*
     * ya - ar by
     *    - ra yb
     *    - ra by
     *    - ar yb
     */

    string correctPassword;
    int n;
    bool firstLetter=false,secondLetter=false;

    cin >> correctPassword;
    cin >> n;

    for(int i=0;i<n;i++){
        string currentInput;
        cin >> currentInput;
        if(currentInput==correctPassword){

            firstLetter=true;
            secondLetter=true;
        }
        if(correctPassword.at(0)==currentInput.at(1)){

            firstLetter = true;
        }
        if(correctPassword.at(1)==currentInput.at(0)){

            secondLetter = true;
        }
    }

    if(firstLetter && secondLetter){

        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    return 0;
}
