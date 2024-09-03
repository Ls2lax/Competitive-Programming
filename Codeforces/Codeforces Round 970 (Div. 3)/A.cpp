// A Sakurko's Exam
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve() {
    int a,b;
    cin>>a>>b;
    if(a == 0) {
        if(b%2 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } else if(b == 0) {
        if(a%2 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } else {
        if(a % 2 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int32_t main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
