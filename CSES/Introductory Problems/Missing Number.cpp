//Missing Number
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
	int n;
	cin>>n;
	// sum of all number from 1 to n --> n*(n+1)/2;
	// missing number = n*(n+1)/2 - sum of given numbers
	int sum = 0;
	for(int i=0;i<n-1;i++) {
		int num;
		cin>>num;
		sum += num;
	}
	cout<<(n*(n+1))/2 - sum <<endl;
}
