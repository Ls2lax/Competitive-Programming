// Movie Festival
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
int32_t main() {
    int n;
    cin>>n;
    vector<pair<int,int>>movies;
    for(int i=0;i<n;i++) {
        int start, end;
        cin>>start>>end;
        movies.push_back({start, end});
    }
    sort(movies.begin(), movies.end());
    int noOfMovies = 0;
    int s = 0;
    int e = 0;
    for(int i=0;i<n;i++) {
        if(movies[i].first>=e) {
            noOfMovies++;
            s = movies[i].first;
            e = movies[i].second;
        } else {
            e = min(e, movies[i].second);
        }
    }
    cout<<noOfMovies<<endl;
}
