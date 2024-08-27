//Weird Algorithm
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	cin>>n;
	cout<<n<<" ";
	while(n != 1) {
		if(n%2 == 0) n = n/2;//if n is even --> divide n by 2
		else n = n*3 +1;//if n odd --> multiply n by 3 and add 1
		cout<<n<<" ";
	}
	cout<<endl;
	return 0;
}
