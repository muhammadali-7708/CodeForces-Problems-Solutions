#include<iostream>
#include <cstring>

using namespace std;
string capitalize(string& s){
    if(s[0] > 'Z'){
        s[0] = s[0] -32;
    }
    return s;
}
int main(){
    string s;
    cin >> s;
    cout << capitalize(s);
}