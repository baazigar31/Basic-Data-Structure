#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define pb 				push_back


int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


	// ll a[10];
	int n;
	cin>>n;
	ll sum=0;
	for(int i=0;i<n;i++){
		ll b;
		cin>>b;
		sum+=b;
	}
	cout<<sum;
	
	
	return 0;
}