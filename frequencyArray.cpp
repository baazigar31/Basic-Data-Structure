#include<bits/stdc++.h>
#include<unordered_map>
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

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		unordered_map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			m[arr[i]]++;
		}
		int flag=0;
		for(int i=0;i<n;i++){
			if(m[arr[i]]>1){
				cout<<"ne krasivo"<<'\n';
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout<<"prekrasnyy"<<'\n';
		}
	}

	
	
	return 0;
}