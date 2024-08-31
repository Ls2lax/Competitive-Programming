//B - Index and Maximum Value
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve() {
    int n, m;
    cin>>n>>m;
    int max_element = 0;
    for(int i=0;i<n;i++) {
        int val;
        cin>>val;
        max_element = max(max_element, val);
    }
    for(int i=0;i<m;i++) {
        char c;
        int l, r;
        cin>>c>>l>>r;
        if(max_element >=l && max_element<=r) {
            if(c == '-') max_element--;
            else max_element++;
        }
        cout<<max_element<<" ";
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
