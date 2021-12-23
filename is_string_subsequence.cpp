// Problem Link - Given a string find whether it is subsequence or not.
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

	string str="geeksforgeeks";
	int n=str.size();
	string s="gksrek";
	int m=s.size();
	vector<int> v[26];
	//O(n) to make adjacency list
	for(int i=0;i<n;i++){
		v[str[i]-'a'].push_back(i);
	}
	int index=0;
	int i=0;
	bool flag=false;
	for( i=0;i<m;i++){ // m iteration over the string O(mlog(n)) for many cases m1log(n)
		vector<int>::iterator it=lower_bound(v[s[i]-'a'].begin(),v[s[i]-'a'].end(),index);
		if(it==v[s[i]-'a'].end()){
			flag=true;
			break;
		}
		int pos=*it;
		index=pos+1;
	}
	if(flag==false){
		cout<<"Subsequnce";
	}
	else{
		cout<<"Not Subsequence";
	}
	//time complexity: O(n+mlog(n))
	return 0;
}