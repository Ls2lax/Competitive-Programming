//Collecting Numbers II
// @Author Laxman Sharma
#include<bits/stdc++.h> 
using namespace std;
int countChanges(vector<int> &index, set<int> &st) {
    int count = 0;
    for(int val: st) {
        if(val == 0 || val == index.size()-1) continue;
        if(index[val] > index[val+1]) count++;
    }
    return count;
}
void solve() {
    int n, q;
    cin>>n>>q;
    int count = 1;
    vector<int> num(n+1), index(n+1);
    for(int i=1;i<=n;i++) {
        int val;
        cin>>val;
        num[i] = val;
        index[val] = i;
    }
    for(int i=2;i<=n;i++) {
        if(index[i] < index[i-1]) {
            count++;
        }
    }
    while(q--) {
        int a, b;
        cin>>a>>b;
        int val1 = num[a];
        int val2 = num[b];
        set<int> st = {val1, val2, val1-1, val2-1};
        count -= countChanges(index, st);
        swap(num[a], num[b]);
        swap(index[val1], index[val2]);
        count += countChanges(index, st);
        cout<<count<<endl;
    }
 
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
    solve();
}
