// Problem Link - Given a string,find longest substring with no duplicate characters
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

	string str="abcadbc";
	int n=str.size();
	int j=0;
	int ans=0;
	string s;
	set<char> st;
	for(int i=0;i<n;i++){
		while(j<n){
			if(st.find(str[j])!=st.end()){
				break;
			}
			st.insert(str[j]);
			j++;
		}
		// ans=max(ans,j-i);
		if(j-i>ans){
			ans=j-i;
			s=str.substr(i,ans);
		}

		st.erase(str[i]);

	}
	cout<<ans<<endl;
	cout<<s<<endl;
	
	return 0;
}