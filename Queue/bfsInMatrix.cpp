// Problem Link - fire and fire station worker.
/* By Shubham Anand */
#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define endl			"\n"
#define pb 				push_back
#define vi              vector<ll>
#define vs				vector<string>
#define pii             pair<ll,ll>
#define ump				unordered_map
#define mp 				make_pair
#define pq_max          priority_queue<ll>
#define pq_min          priority_queue<ll,vi,greater<ll> >
#define all(n) 			n.begin(),n.end()
#define ff 				first
#define ss 				second
#define mid(l,r)        (l+(r-l)/2)
#define bitc(n) 		__builtin_popcount(n)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define iter(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define log(args...) 	{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
template <typename T> T gcd(T a, T b){if(a%b) return gcd(b,a%b);return b;}
template <typename T> T lcm(T a, T b){return (a*(b/gcd(a,b)));}
vs tokenizer(string str,char ch) {std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;}


void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cout << *it << " = " << a << endl;
	err(++it, args...);
}
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//typedef trie<string,null_type,trie_string_access_traits<>,pat_trie_tag,trie_prefix_search_node_update> pbtrie;

void file_i_o()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
}
vector<vector<int>> arr={
		{5,0,-1,100},
		{5,10,1,1},
		{0,-1,2,9},
		{0,-1,4,7}
	};

	int xf=0,yf=0;
	int xw=3,yw=3;
	int visited[4][4]={0};
	int visited2[4][4]={0};


bool isvalid(int i, int j){
	return i>=0 && i<4 && j>=0 && j<4 && arr[i][j]!=-1 && visited[i][j]==0;
}
bool isvalid2(int i, int j){
	return i>=0 && i<4 && j>=0 && j<4 && arr[i][j]!=-1 && visited2[i][j]==0;
}
int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....

	
	queue<pair<pair<int,int>,int>> q;
	q.push({{0,0},1});
	int xdirection[]={0,1,0,-1};
	int ydirection[]={1,0,-1,0};
	while(!q.empty()){
		int dis=q.front().second;
		int i=q.front().first.first;
		int j=q.front().first.second;
		q.pop();
		visited[i][j]=dis;
		// if(i==0 and j==3){
		// 	cout<<visited[i][j]<<endl;
		// }
		for(int l=0;l<4;l++){
			 int xi=i+xdirection[l];
			 int yi=j+ydirection[l];
			//  if(i==0 and j==3){
			// 	cout<<visited[i][j]<<endl;
			// }
			 if(isvalid(xi,yi)){
			 	q.push({{xi,yi},dis+1});
			 }
		}

	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<visited[i][j]<<" ";
		}
		cout<<endl;
	}

//////for worker as source

	q.push({{3,3},1});

	while(!q.empty()){
		int dis=q.front().second;
		int i=q.front().first.first;
		int j=q.front().first.second;
		q.pop();
		visited2[i][j]=dis;
		// if(i==0 and j==3){
		// 	cout<<visited[i][j]<<endl;
		// }
		for(int l=0;l<4;l++){
			 int xi=i+xdirection[l];
			 int yi=j+ydirection[l];
			//  if(i==0 and j==3){
			// 	cout<<visited[i][j]<<endl;
			// }
			 if(isvalid2(xi,yi)){
			 	q.push({{xi,yi},dis+1});
			 }
		}

	}

	cout<<endl;

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<visited2[i][j]<<" ";
		}
		cout<<endl;
	}











	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;
}

