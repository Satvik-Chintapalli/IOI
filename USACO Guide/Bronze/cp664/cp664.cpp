#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("blocks.in","r",stdin);
    freopen("blocks.out","w",stdout);

    int n;
    cin >> n;
    vector<char> alphabets={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<int> blocks(26);
    for(int i=0;i<n;i++){
        string str1,str2;
        cin >> str1 >> str2;
        for(int j=0;j<26;j++){
           int count_str1=0,count_str2=0;
           for(int k=0;k<str1.length();k++){
               if(str1.at(k)==alphabets.at(j)){count_str1+=1;}
           }
           for(int l=0;l<str2.length();l++){
               if(str2.at(l)==alphabets.at(j)){count_str2+=1;}
           }
           blocks.at(j)+=max(count_str1,count_str2);
        }
    }
    for(int i : blocks){
        cout << i << "\n";
    }

    return 0;
}
