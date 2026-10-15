#include <bits/stdc++.h>

using namespace std;

string binary(int a){
   string bin = "";
   for(int i=1;i<14;i++){
      int remainder = a%(2^i);
      if(i==1){
          if(remainder==0){bin.insert(0,1,'0');}
          else{bin.insert(0,1,'1');}
      }

      else if(remainder<=(2^(i-1)-1)){
         bin.insert(0,1,'0');
      }
      else{
          bin.insert(0,1,'1');
      }
   } 
   return bin;
}

/*
bool XOR(int a,int b,int c){
   string binary_a = binary(a); 
   string binary_b = binary(b); 
   string binary_c = binary(c); 
   string sum = "";

   for(int i=0;i<13;i++){
       if(binary_a.at(i) == binary_b.at(i)){
           sum.insert(0,1,'0');
       }
       else{
           sum.insert(0,1,'1');
       }
   }
   if(sum==binary_c){
       return true;
   }
   else{
       return false;
   }
}
*/

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int counter=0;
    cin >> n;
    /*for(int i=1;i<=n;i++){
       int a=i; 
       for(int j=i+1;j<=n;j++){
           int b=j;
           for(int k=j+1;k<=n;k++){
               int c=k;
               if(a+b>c && b+c>a && c+a>b && XOR(a,b,c)){
                   counter +=1;
               }
           }
       }
    }
    cout << counter << "\n";
*/
    cout << binary(3);
    return 0;
}
