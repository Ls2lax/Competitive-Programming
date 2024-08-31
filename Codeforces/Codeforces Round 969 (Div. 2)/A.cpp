//A - Dora's Set
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve() {
    int l, r;
    cin>>l>>r;
    if(l % 2 == 1) l--;
    if(r % 2 == 1) r++;
    cout<<(r -l + 1)/4<<endl;
}
int32_t main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
