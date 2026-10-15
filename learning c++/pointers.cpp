#include <bits/stdc++.h>

using namespace std;

int main(){
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;
    //string panvel = &name; --> Leads to type error
    cout << &age << "\n";

    cout << pAge << "\n";

    //cout << panvel << "\n" ;

    
    return 0;
}
