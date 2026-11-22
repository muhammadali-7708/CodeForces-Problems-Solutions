#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if (s.length() > 10) {
			string temp = "abc ";
			temp[0] = s[0];
			if(s.length() - 2 < 10){
			    temp[2] = s[s.length() - 1];
			    temp[1] = ((s.length() - 2) % 10) + 48;
			}
			else{
			    temp[3] = s[s.length() - 1];
		    	temp[1] = ((s.length() - 2) / 10) + 48;
			    temp[2] = ((s.length() - 2) % 10) + 48;
			}
			s = temp;
		}
		cout << s << '\n';
	}
 
 
	return 0;
}