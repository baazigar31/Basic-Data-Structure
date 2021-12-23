#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define pb 				push_back

bool isValid(int x, int y){
	 	if(x>=0 and x<6 and y>=0 and y<6){
	 		return true;
	 	}
	 	return false;
	 }
int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	vector<vector<int> > v(6,vector<int> (6,0));
	vector<vector<int> > arr(6,vector<int> (6,0));
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"****************"<<endl;


	queue<pair<pair<int,int>,int> > q;
	q.push({{3,2},0});
	while(!q.empty()){
		int x=q.front().first.first;
		int y=q.front().first.second;
		int d=q.front().second;
		arr[x][y]=d;
		q.pop();
		if(isValid(x,y+1)){
			q.push({{x,y+1},d+1});
		}
		if(isValid(x,y-1)){
			q.push({{x,y-1},d+1});
		}
		if(isValid(x+1,y)){
			q.push({{x+1,y},d+1});
		}
		if(isValid(x-1,y)){
			q.push({{x-1,y},d+1});
		}

	}
	cout<<endl;
	cout<<"hello";
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
		cout<<"shubham";
	}
	
	return 0;
}