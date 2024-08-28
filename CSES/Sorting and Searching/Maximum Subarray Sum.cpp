//Maximum Subarray Sum
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
	int n;
	cin>>n;
	priority_queue<int, vector<int>, greater<int>>pq;
	int maxSum = INT_MIN;
	int sum = 0;
	for(int i=0;i<n;i++) {
		int val;
		cin>>val;
		sum += val;
		if(!pq.empty()) {
			maxSum = max(maxSum, sum - pq.top());
		}
		maxSum = max(maxSum, sum);
		pq.push(sum);
	}
	cout<<maxSum<<endl;

}
