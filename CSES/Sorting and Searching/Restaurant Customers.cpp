// Restaurant Customers
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
int32_t main() {
    int n;
    cin>>n;
    map<int, int> mp;
    for(int i=0;i<n;i++) {
        int l, r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    int ans = 0;
    int prev = 0;
    for(auto it: mp) {
        int c = it.second + prev;
        ans = max(ans, c);
        prev = c;
    }
    cout<<ans<<endl;
}
