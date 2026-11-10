#include <bits/stdc++.h>

using namespace std;

int n,k;
vector<int> diamonds;
vector<int> problems;

bool checker(){
    for(int i=0;i<problems.size();i++){
        if(problems[i]!=0){
            return true;
        }
    }
    return false;
}
void problemCounter(){
    for(int i=0;i<problems.size();i++){
        for(int j=i+1;j<problems.size();j++){
            if(abs(diamonds[j]-diamonds[i])>k){
                problems[i]+=1;
                problems[j]+=1;
            }
        }
    } 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("diamond.in","r",stdin);
    freopen("diamond.out","w",stdout);

    cin >> n >> k;
    diamonds.resize(n);
    problems.resize(n);
    for(int i=0;i<n;i++){
        cin >> diamonds[i];
    }
    sort(diamonds.begin(),diamonds.end());
    
    bool loop=true;
    while(loop){
        problemCounter();
        loop=checker(); 
        if(loop){
        vector<int> sortedProblems = problems;
        sort(sortedProblems.begin(),sortedProblems.end());
        auto it = find(problems.begin(),problems.end(),sortedProblems.back());
        int index = it - problems.begin();
        diamonds.erase(diamonds.begin()+index); 
        problems.erase(problems.begin()+index); 
        fill(problems.begin(),problems.end(),0);
        }
    }
    cout << diamonds.size();
    
    

    
    return 0;
}
