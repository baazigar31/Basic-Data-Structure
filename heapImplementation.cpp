// Problem Link - 
/* By Shubham Anand */
#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll 				long long int
// #define ld				long double
// #define mod             1000000007
// #define inf             1e18
// #define endl			"\n"
// #define pb 				push_back
// #define vi              vector<ll>
// #define vs				vector<string>
// #define pii             pair<ll,ll>
// #define ump				unordered_map
// #define mp 				make_pair
// #define pq_max          priority_queue<ll>
// #define pq_min          priority_queue<ll,vi,greater<ll> >
// #define all(n) 			n.begin(),n.end()
// #define ff 				first
// #define ss 				second
// #define mid(l,r)        (l+(r-l)/2)
// #define bitc(n) 		__builtin_popcount(n)
// #define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
// #define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
// #define iter(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
// #define log(args...) 	{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
// #define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
// template <typename T> T gcd(T a, T b){if(a%b) return gcd(b,a%b);return b;}
// template <typename T> T lcm(T a, T b){return (a*(b/gcd(a,b)));}
// vs tokenizer(string str,char ch) {std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;}


// void err(istream_iterator<string> it) {}
// template<typename T, typename... Args>
// void err(istream_iterator<string> it, T a, Args... args) {
// 	cout << *it << " = " << a << endl;
// 	err(++it, args...);
// }
// //typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// //typedef trie<string,null_type,trie_string_access_traits<>,pat_trie_tag,trie_prefix_search_node_update> pbtrie;

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

template<typename T>
class Heap{
private:
	vector<T> pq;
public:
	// Heap(){
	// 	vector<int> pq;
	// }

	int size(){
		return pq.size();
	}
	bool isEmpty(){
		return pq.size()==0;
	}

	int parent(int node){
		int p=(node-1)/2;
		return p;
	}

	int leftChild(int node){
		if(((2*node)+1)<pq.size()){
			return (2*node)+1;
		}else{
			return -1;
		}
	}
	int rightChild(int node){
		if(((2*node)+2)<pq.size()){
			return (2*node)+2;
		}else{
			return -1;
		}
	}

	void push(T val){
		pq.push_back(val);
		// cout<<pq.size()-1;
		upHeapify(pq.size()-1);
	}

	void pop(){
		if(isEmpty()){
			return;
		}
		swap(pq[0],pq[pq.size()-1]);
		downHeapify(0);
	}
	void upHeapify(int node){
		int prnt=(node-1)/2;
		if(prnt<0){
			return;
		}
		if(pq[prnt]>=pq[node]){
			return ;
		}
		swap(pq[prnt],pq[node]);
		node=prnt;
		upHeapify(node);
	}

	void downHeapify(int node){
		int lchild=leftChild(node);
		int rchild=rightChild(node);
		int largest=node;
		if(lchild<pq.size() and pq[lchild]>pq[largest]){
			largest=lchild;
		}
		if(rchild<pq.size() and pq[rchild]>pq[largest]){
			largest=rchild;
		}
		if(largest!=node){
			swap(pq[largest],pq[node]);
			downHeapify(largest);
		}

	}

	T top(){
		return pq[0];
	}

	void print(){
		for(auto el: pq){
			cout<<el<<" ";
		}
	}





};

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....

	// Heap<int> h;
	// h.push(10);
	// h.push(19);
	// h.push(12);
	// h.push(14);
	// h.push(6);
	// h.push(7);
	// // // cout<<h.top();B
	// // cout<<h.size();
	// // cout<<h.isEmpty();
	// h.push(1);
	// cout<<h.top()<<endl;
	// h.pop();
	// cout<<h.top()<<endl;
	// // cout<<h.top()<<endl;
	// h.pop();
	// cout<<h.top()<<endl;

	Heap<string> hp;
	hp.push("shubham");
	hp.push("loves");
	hp.push("setika");
	hp.push("raj");
	hp.push("a");
	hp.push("lot");

	cout<<hp.top()<<endl;

	hp.print();
	hp.pop();
	cout<<endl<<hp.top()<<endl;
	hp.print();












	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;
}

