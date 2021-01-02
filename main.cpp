#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr = {2, 3, 4, 5, 6};
	int n = arr.size();
	int start = arr[0] * arr[1];
	for(int i=0;i<n-2;i++)
	  arr[i] = arr[i] * arr[i+2];
	arr[n-1] = arr[n-1] * arr[n-2];
	for(int i=n-2;i>0;i--)
	  arr[i] = arr[i-1];
	arr[0] = start;
	for(auto i : arr)
	  cout<<i<<" ";
	return 0;
}
