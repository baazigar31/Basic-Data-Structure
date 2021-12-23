// Problem Link - https://codeforces.com/contest/1462/problem/C
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

vector<int> v(10,0);
int i=9;
int unique(int k){
	if(k<10 and k>0){
		if(v[k]!=1)
		 return k;
		else{
			return -1;
		}
	}
	int ans=-1;
	int temp=k;
	temp=temp-i;
	v[i]=1;
	int r=i;
	i--;
	// int r=i;
	int s=unique(temp);
	if(s!=-1){
		 ans=s*10+r;
		return ans;
	}
	else{
		return -1;
	}
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
		int x;
		cin>>x;
		cout<<unique(x)<<endl;
		v.resize(10,0);
		i=9;

	}
	
	
	return 0;
}