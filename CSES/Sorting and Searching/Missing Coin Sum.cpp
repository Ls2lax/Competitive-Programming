//Missing Coin Sum
//Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
	int n;
	cin>>n;
	vector<int> coins(n);
	for(int i=0;i<n;i++) cin>>coins[i];
	sort(coins.begin(), coins.end());
	int ans = 0;
	for(int i=0;i<n;i++) {
		if(coins[i]>(ans+1)) break;
		else ans += coins[i];
	}
	cout<<ans+1<<endl;
}
