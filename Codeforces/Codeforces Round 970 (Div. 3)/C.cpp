// C Longest Good Array
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve() {
    int l,r;
    cin>>l>>r;
    int val = r-l+1;
    int sum = 2*(r-l);
    int num = sqrt(sum);
    int pred = (num * (num+1))/2 + 1;
    if(pred <= val) {
        cout<<num+1<<endl;
    } else {
        cout<<num<<endl;
    }

}
int32_t main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
