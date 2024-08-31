//Iris and Game on the Tree
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve() {
    int n;
    cin>>n;
    vector<int> degree(n+1, 0);
    for(int i=0;i<n-1;i++) {
        int u,v;
        cin>>u>>v;
        degree[u]++;
        degree[v]++;
    }
    string s;
    cin>>s;
    if(s[0] != '?') {
        int ans = 0;
        int notDecided = 0;
        for(int i=2;i<=n;i++) {
            if(degree[i] == 1) {
                if(s[i-1] == '?') notDecided++;
                else if(s[i-1] != s[0]) ans++;
            }
        }
        ans += (notDecided+1)/2;
        cout<<ans<<endl;
    } else {
        int zeros = 0;
        int ones = 0;
        int leafNotDecide = 0;
        int otherNotDecided = 0;
        int ans = 0;
        for(int i=2;i<=n;i++) {
            if(degree[i] == 1) {
                if(s[i-1] == '0') zeros++;
                else if(s[i-1] == '1') ones++;
                else leafNotDecide++;
            } else {
                if(s[i-1] == '?') otherNotDecided++;
            }
        }
        //cout<<zeros<<" "<<ones<<" "<<leafNotDecide<<" "<<otherNotDecided<<endl;
        if(zeros != ones) {
            ans = max(zeros, ones) + leafNotDecide/2;
        } else if(leafNotDecide % 2 == 1 && otherNotDecided %2 == 1) {
            ans = zeros + (leafNotDecide+1)/2;
        } else {
            ans = zeros + leafNotDecide/2;
        }
        cout<<ans<<endl;
    }
}
int32_t main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
