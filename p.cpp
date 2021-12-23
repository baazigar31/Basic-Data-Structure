// Problem Link - 
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

	// char a(97);
	// cout<<a;
		// c

		// string str;
		// cin>>str;
		// istringstream var(str);
		// string s;
		// while(getline(var,s,'-')){
		// 	cout<<s<<" ";
		// }

		// string str;
		// cin>>str;
		// istringstream var(str);
		// string s="shubham";
		// while(getline(cin,s,'d')){ //cin is a object of istream
		// 	cout<<s<<" ";
		// }

		// int n;
		// cin>>n;
		// vector<int> v(n);
		// for(int i=0;i<n;i++){
		// 	cin>>v[i];
		// }
		// reverse(v.begin(),v.end());
		// loop(i,0,n-1){
		// 	cout<<v[i]<<endl;
		// }

		// bitset<32> b1;
		// b1[1]=1;
		// b1[31]=1;
		// cout<<b1;

		vector<int> v{1,2,3,4,5,6};
		// v.pb(10);
		// cout<<v.size()<<" "<<v.capacity()<<endl;
		// v.pop_back();
		// cout<<v.size()<<" "<<v.capacity()<<endl;
		// // v.pop_front(); // wrong
		// cout<<v.back()<<endl;
		// cout<<v.front()<<endl;
		// for(auto el:v){
		// 	cout<<el<<" ";
		// 
		vector<int>::iterator it=v.begin();
		cout<<*it<<endl;
		it++;
		it=it+2;
		cout<<*it<<endl;

	
	return 0;
}