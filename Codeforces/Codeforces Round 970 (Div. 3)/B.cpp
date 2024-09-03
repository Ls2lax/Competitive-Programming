//Square or Not
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int val = sqrt(n);
    if(val*val == n) {
        bool flag = true;
        for(int i=0;i<val;i++) {
            if(s[i] == '0') {
                flag = false;
                break;
            }
        }
        for(int i=1;i<val-1;i++) {
            for(int j=0;j<val;j++) {
                if(j == 0 || j == val-1) {
                    if(s[i*val +j] == '0') {
                        flag = false;
                        break;
                    }
                }
                if(j >=1 && j<val-1) {
                    if(s[i*val +j] == '1') {
                        //cout<<"hello"<<endl;
                        flag = false;
                        break;
                    }
                }
            }
        }
        for(int i=0;i<val;i++) {
            if(s[(val-1)*val +i] == '0') {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout<<"Yes"<<endl;
        } else cout<<"No"<<endl;

    } else {
        cout<<"No"<<endl;
    }
}
int32_t main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
