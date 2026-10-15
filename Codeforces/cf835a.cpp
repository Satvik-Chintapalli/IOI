#include <bits/stdc++.h>

using namespace std;



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int s,v1,v2,t1,t2;

    cin >> s >> v1 >> v2 >> t1 >> t2;
    
    int time1 = (s*v1) + 2*t1;
    int time2 = (s*v2) + 2*t2;

    if(time1<time2){

        cout << "First" << "\n";
    }
    else if(time1>time2){

        cout << "Second" << "\n";

    }
    else{

        cout << "Friendship" << "\n";
    }


    

    return 0;
}
