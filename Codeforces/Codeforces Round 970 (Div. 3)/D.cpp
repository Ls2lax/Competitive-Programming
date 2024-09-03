//D Sakurako's Hobby
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long int
void dfs(int val, int p, vector<int> &permt, vector<int> &count, vector<int> &parent, vector<int> &color) {
    parent[val] = p;
    if(color[val] == 0) count[p]++;
    int newval = permt[val];
    if(parent[newval] == -1) {
        dfs(newval,p,permt,count,parent,color);
    }
}
void solve() {
    int n;
    cin>>n;
    vector<int> permt(n+1);
    for(int i=1;i<=n;i++) cin>>permt[i];
    string s;
    cin>>s;
    vector<int> count(n+1, 0);
    vector<int> parent(n+1, -1);
    vector<int> color(n+1, 0);
    for(int i=1;i<=n;i++) {
        color[permt[i]] = s[i-1]-'0';
    }
    for(int i=1;i<=n;i++) {
        int val = permt[i];
        if(parent[val] == -1) {
            dfs(val, val, permt, count, parent, color);
        }
    }
    for(int i=1;i<=n;i++) {
        cout<<count[parent[permt[i]]]<<" ";
    }
    cout<<endl;
}
int32_t main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
