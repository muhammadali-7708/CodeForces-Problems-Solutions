#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int a1, a2, a3, a4, ans;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    ans = 0;
    for(auto num : s){
        if(num == '1')
            ans = ans + a1;
        else if(num == '2')
            ans = ans + a2;
        else if(num == '3')
            ans = ans + a3;
        else
            ans = ans + a4;
    }
    cout << ans;
    return 0;
}