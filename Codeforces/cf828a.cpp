#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a;// 4 1 
    int rejected=0;
    float b;//1
    cin >> n >> a >> b;
    int choices[n];
    for(int i=0;i<n;i++){
        cin >> choices[i];
    }
    for(int i=0;i<n;i++){
        int current = choices[i];
        if(current==2){
            if(b<1){
                rejected+=1;
            } 
            else{
                b-=1;
            }
        }
        if(current==1){
            if(a>0){
                a-=1;
            }
            else if(b>0){
                b-=0.5;
            }
            else{
                rejected+=1;
            }
        }
    }

    cout << rejected << "\n";

    return 0;
}
