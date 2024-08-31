//C - Dora and C++
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve() {
    int n, a, b;
    cin>>n>>a>>b;
    vector<int> val(n);
    for(int i=0;i<n;i++) {
        cin>>val[i];
    }
    int x = __gcd(a,b);
    for(int i=0;i<n;i++) {
        val[i] = val[i] % x;
    }
    sort(val.begin(), val.end());
    int ans = val[n-1] - val[0];
    for(int i=1;i<n;i++) {
        int mxn = val[i-1] + x;
        ans = min(ans, mxn - val[i]);
    }
    cout<<ans<<endl;
}
int32_t main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
