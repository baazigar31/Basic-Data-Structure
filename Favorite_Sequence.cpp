// Problem Link - https://codeforces.com/contest/1462/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define endl			"\n"
#define pb 				push_back
#define ff 				first
#define ss 				second
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)


int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> v(n);
		loop(i,0,n-1){
			cin>>v[i];
		}
		int i=0;
		int j=n-1;
		while(i<=j){
			cout<<v[i++]<<" ";
			if(i<=j){
				 cout<<v[j--]<<" ";
			}
			
		}
		cout<<endl;

	}	
	return 0;
}