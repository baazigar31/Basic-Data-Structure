// Problem Link - https://codeforces.com/contest/1462/problem/B
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
void solve(){
		int n;
		cin>>n;
		string str;
		cin>>str;
		string s2="2020";
		for(int i=0;i<5;i++){
			if(str.substr(0,i)+str.substr(i+n-4,4-i)==s2){
				cout<<"YES"<<endl;
				return;
			}
		}
		cout<<"NO"<<endl;
		return;
}

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	int t;
	cin>>t;
	while(t--){
		solve();
	}
	
	return 0;
}