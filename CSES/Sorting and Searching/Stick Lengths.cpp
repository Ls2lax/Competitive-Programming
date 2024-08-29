//Stick Lengths
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
	int n;
	cin>>n;
	vector<int> sticks(n);
	int prefSum = 0;
	for(int i=0;i<n;i++) {
		cin>>sticks[i];
		prefSum += sticks[i];
	}
	sort(sticks.begin(), sticks.end());
	int ans = prefSum;
	int sufSum = 0;
	for(int i=n-1;i>=0;i--) {
		prefSum -= sticks[i];
		int prefCost = i * sticks[i] - prefSum;
		int sufCost = sufSum - (n-i-1)*sticks[i];
		ans = min(ans, prefCost + sufCost);
		sufSum += sticks[i];
	}
	cout<<ans<<endl;
}
