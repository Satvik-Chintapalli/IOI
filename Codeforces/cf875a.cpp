#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k=0;
    int limit;
    vector<int> ans;
    cin >> n;

    string number = to_string(n);
    int length = number.length()-1;
    if(length>=2){

        limit =(10^(length)-1)+(9*(length)); 
    }
    else{limit = 0;}
    
    for(int i=n-1;i>=limit;i--){
        int sum=i;
        string str = to_string(i);

        
        for(int i=0;i<str.length();i++){
            int num = str.at(i)-'0';
            sum += num;
        }
        if(sum==n){
            k+=1;
            ans.push_back(i);
        }
    }

    cout << k << "\n";

    for(int i=ans.size()-1;i>=0;i--){
        cout << ans.at(i) << "\n";
    }


    return 0;
}
