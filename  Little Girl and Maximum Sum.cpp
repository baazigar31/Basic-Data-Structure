// Problem Link - https://codeforces.com/problemset/problem/276/C
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


		int n,q;
		cin>>n>>q;
		vector<ll> v(n+1,0);
		loop(i,1,n){
			cin>>v[i];
		}
		vector<ll> ind(n+1,0);
		while(q--){
			int l,r;
			cin>>l>>r;
			ind[l]++;
			if(r<n){
				ind[r+1]--;
			}
			
		}
		//prefixsum of ind 
		loop(i,1,n){
			ind[i]+=ind[i-1];
		}
		sort(ind.begin(),ind.end());
		sort(v.begin(),v.end());

		ll sum=0;
		for(int i=n;i>=1;i--){
			sum+=(ind[i]*v[i]);
		}
		cout<<sum<<endl;

	
	
	return 0;
}