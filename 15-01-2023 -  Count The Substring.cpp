#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
  int countSubstring(string S){
    // code here
    int count= 0; 
  
    // Loop to calcualte the number of substrings 
    // starting from each index 
    for (int i = 0; i < S.length(); i++) { 
        // Variable to store count of 1s 
        int ones = 0; 
  
        // Variable to store count of 0s 
        int zeros = 0; 
  
        // Loop to calculate number of 1s and 0s 
        // in the substring starting from i 
        for (int j = i; j < S.length(); j++) { 
            if (S[j] == '1') 
                ones++; 
            else
                zeros++; 
  
            // If number of 1s is more than 0s 
            // in the substring, increment count 
            if (ones > zeros) 
                count++; 
        } 
    } 
  
    // Return the final count 
    return count;
  }
};

int main(){

ios_base: :sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
int t=1;
cin>>t;
for(int i=1;i<=t;i++){ 
string s;
cin>>s;
Solution obj; 
long long ans =obj.countSubstring(s); 
cout<<ans<<endl;
}
return 0;
}