// Problem Link - 
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

template<typename T>
class stackArray{
private:
	int size;
	int capacity;
	T *a;
public:
	stackArray(int c){
		size=0;
		capacity=c;
		a=new T[c];
	}

	void push(T x){
		if(size==capacity){
			cout<<"stack overflow\n";
			return;
		}
		a[size++]=x;
	}
	T pop(){
		if(size==0){
			cout<<"stack underflow\n";
			return T();
		}
		return a[--size];
	}

	T top(){
		if(size==0){
			cout<<"Stack empty\n";
			return T();
		}
		return a[size-1];
	}
	bool isEmpty(){
		return size==0;
	}

};

struct node{
	int data;
	node* next;
};

class stackLL{
	private:
		node* head;
		int size;
	public:
		stackLL(){
			head=NULL;
			size=0;
		}

		void push(int x){
			if(head==NULL){
				head=new node;
				head->data=x;
				head->next=NULL;
				size++;
				return;
			}
			node* temp=new node;
			temp->data=x;
			temp->next=head;
			head=temp;	
			size++;
		}

		int top(){
			if(head==NULL){
				cout<<"Stack underflow\n";
				return -1;
			}
			return head->data;
		}
		void pop(){
			if(head==NULL){
				cout<<"Stack underflow\n";
				return;
			}
			node* temp=head;
			head=head->next;
			delete temp;
			size--;
			return;
		}

};

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....

	stack<int,vector<int>> s1;
	stack<int,list<int>> s2;
	stack<int,deque<int>> s3;

	// stackArray<int> stk(5);
	// stk.push(10);
	// stk.push(9);
	// stk.push(8);
	// cout<<stk.top()<<endl;
	// stk.pop();
	// stk.pop();
	// stk.pop();
	// cout<<stk.top();

	stackLL s;
	s.push(10);
	s.push(5);
	s.push(3);
	cout<<s.top()<<endl;







	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;
}

