//Apartment
//@author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
int32_t main() {
    int n,m,k;
    cin>>n>>m>>k;
    int desiredSize[n];
    int apartmentSize[m];
    for(int i=0;i<n;i++) {
        cin>>desiredSize[i];
    }
    for(int i=0;i<m;i++) {
        cin>>apartmentSize[i];
    }
    sort(desiredSize, desiredSize+n);
    sort(apartmentSize, apartmentSize+m);
    int ans = 0;
    int j=0;
    for(int i=0;i<n;i++) {
        if(j>=m) break;
        while(j<m) {
            if(abs(desiredSize[i]-apartmentSize[j])<=k) {
                ans++;
                j++;
                break;
            } else if(apartmentSize[j] > desiredSize[i] + k) break;
            else j++;
        }
    }
    cout<<ans<<endl;
}
