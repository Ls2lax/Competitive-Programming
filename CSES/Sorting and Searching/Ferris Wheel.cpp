//Ferris Wheel
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
int32_t main() {
    int n, x;
    cin>>n>>x;
    vector<int> weights(n);
    for(int i=0;i<n;i++) cin>>weights[i];
    // gondola may one or two childs for optimization we need to sort the weights array
    sort(weights.begin(), weights.end());
    int i = 0;
    int j = n-1;
    int noOfGondolas = 0;
    while(i <= j) {
        if(i == j) {
            noOfGondolas++;
            i++;
            j--;
        } else if(weights[i] + weights[j] <= x) {
            noOfGondolas++;
            i++;
            j--;
        } else {
            noOfGondolas++;
            j--;
        }
    }
    cout<<noOfGondolas<<endl;
}
