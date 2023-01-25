#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minOperation(string s) {
        int n = s.size();
        for (int i = n / 2 - 1; i >= 0; --i)
            if (s.substr(0, i + 1) == s.substr(i + 1, i + 1))
                return (i + 1) + 1 + (n - 2 * (i + 1));

        return n;
    }
};

int main(){
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		solution ob;

		cout << ob.minOperation(s) << "\n";

     }
return 0;
}