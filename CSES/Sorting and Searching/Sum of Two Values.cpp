// Sum of Two Values
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
int32_t main() {
    int n, x;
    cin>>n>>x;
    vector<pair<int,int>> values;
    for(int i=0;i<n;i++) {
        int val;
        cin>>val;
        values.push_back({val, i+1});
    }
    sort(values.begin(), values.end());
    int l=0,r=n-1;
    bool possible = false;
    while(l<r ) {
        if(values[l].first + values[r].first == x) {
            cout<<min(values[l].second, values[r].second)<<" "<<max(values[l].second, values[r].second)<<endl;
            possible = true;
            break;
        } else if(values[l].first + values[r].first < x) l++;
        else r--;
    }
    if(!possible) cout<<"IMPOSSIBLE"<<endl;
}
