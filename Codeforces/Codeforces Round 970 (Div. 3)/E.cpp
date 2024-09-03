//E Alternating String
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve() {
    int n;
    string s;
    cin>>n>>s;
    vector<int> prefEven(26, 0);
    vector<int> prefOdd(26, 0);
    int ans = n;
    for(int i=0;i<n;i++) {
        if(i%2 == 0) prefEven[s[i] - 'a']++;
        else prefOdd[s[i] - 'a']++;
    }
    if(n % 2 == 0) {
        int valEven = 0, valOdd = 0;
        for(int i=0;i<26;i++) {
            valEven = max(valEven, prefEven[i]);
            valOdd = max(valOdd, prefOdd[i]);
        }
        ans = min(ans, n - valEven - valOdd);
    } else {
        //cout<<"Hello"<<" "<<ans<<endl;
        vector<int> sufEven(26, 0);
        vector<int> sufOdd(26, 0);
        for(int i=n-1;i>=0;i--) {
            int valEven = 0, valOdd = 0;
            if(i % 2 == 0) prefEven[s[i] - 'a']--;
            else prefOdd[s[i] - 'a']--;
            for(int j=0;j<26;j++) {
                valEven = max(valEven, prefEven[j] + sufOdd[j]);
                valOdd = max(valOdd, prefOdd[j] + sufEven[j]);
            }
            if(i%2 == 0) sufEven[s[i] - 'a']++;
            else sufOdd[s[i] - 'a']++;
            ans = min(ans, n - valOdd - valEven);
        }
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
