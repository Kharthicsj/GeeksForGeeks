#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
    vector<long long> ans(n);
    stack<int> s;
    s.push(0);
    for(int i=1;i<n;i++){
        while(!s.empty() && arr[s.top()]<arr[i]){
            ans[s.top()]=arr[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        ans[s.top()]=-1;
        s.pop();
    }
    return ans;
}
};

int main(){

int t; 
cin>>t;
while(t--)
{
	int n;

	cin >> n;
	vector<long long> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];

	solution ob;

	vector <long long> res = ob.nextLargerElement(arr, n);

	for (long long i : res) cout << i << " ";
	cout<<endl;
 }

return 0;

} 