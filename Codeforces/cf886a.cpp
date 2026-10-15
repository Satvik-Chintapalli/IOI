#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float numbers[6];
    bool possible=false;
    float sum=0;
    for(int i=0;i<6;i++){
        cin >> numbers[i];
        sum += numbers[i];
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<6;k++){
               if(numbers[i]+numbers[j]+numbers[k]==sum/2){possible=true;break;}
            }
        }
    }
    if(possible){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }



    return 0;
}
