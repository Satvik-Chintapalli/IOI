#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v1,v2,v3,vm,c1,c2,c3;
    bool possible=false;
    cin >> v1 >> v2 >> v3 >> vm;
    // v1<=c1<=2v1 v2<=c2<=2v2 v3<=c3<=2v3 vm<=c3<=2vm v1>v2>v3 c1>c2>c3

    for(int i=v1;i<=2*v1;i++){
        c1=i;
        for(int j=v2;j<=2*v2;j++){
            c2=j;
            for(int k=v3;k<=2*v3;k++){
               c3=k;
               if(c1>c2 && c2>c3 && vm<=c3 && c3<=2*vm && 2*vm<c1 && 2*vm<c2 ){
                   possible = true;
                   break;
               }
            }
        }
    }
    if(possible){
        cout << c1 << "\n" << c2 << "\n" << c3 << "\n";
    }
    else{
        cout << "-1";
    }
    return 0;
}
