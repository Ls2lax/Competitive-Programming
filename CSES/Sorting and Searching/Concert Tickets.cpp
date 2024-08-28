//Concert Tickets
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
int32_t main() {
    int n,m;
    cin>>n>>m;
    multiset<int> tickets;//as there may be two tickets with same price so we need multiset
    for(int i=0;i<n;i++) {
        int ticketPrice;
        cin>>ticketPrice;
        tickets.insert(-1*ticketPrice);
    }
    for(int i=0;i<m;i++) {
        int customerPrice;
        cin>>customerPrice;
        auto it = tickets.lower_bound(-1*customerPrice);
        if(it == tickets.end()) {
            cout<<-1<<endl;
            continue;
        }
        cout<<-1*(*it)<<endl;
        tickets.erase(it);
    }
}
