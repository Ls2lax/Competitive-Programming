// Collecting Numbers
//@Author Laxman Sharma
#include<bits/stdc++.h> 
using namespace std; 
int solve() {
    int n;
    cin>>n;
    unordered_set<int> st;
    int ans = 1;
    for(int i=0;i<n;i++) {
        int val;
        cin>>val;
        if(st.find(val+1) != st.end()) {
            ans++;
        }
        st.insert(val);
    }
    return ans;
} 
int main() 
{ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 
 
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout); 
#endif 
int t=1;
//cin>>t;
while(t--) {
    cout<<solve()<<endl;
}
}
