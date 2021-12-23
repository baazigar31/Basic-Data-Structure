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
// #define mid(l,r)        (l+(r-l)/2)
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

struct node
{
	int data;
	node* next;
};

struct linkedList{
	node* head;
	node* tail;
	int size;
	linkedList(){
		head=NULL;
		tail=NULL;
		size=0;
	}

	void print(){
		node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"-> ";
			temp=temp->next;
		}
	}

	void push_back(int val){
		node* temp=new node;
		temp->data=val;
		temp->next=NULL;
		if(head==NULL){
			head=temp;
			tail=temp; 
		}else{
			tail->next=temp;
			tail=tail->next;
		}
		size++;

	}

	int get_size(){
		return size;
	}
	void push_front(int val){
		node* temp=new node;
		temp->data=val;
		temp->next=NULL;
		if(head==NULL){
			head=tail=temp;
			return;
		}
		temp->next=head;
		head=temp;
		size++;

	}

	void insert(int index,int val){
		if(index<=0){
			push_front(val);
			return;
		}
		if(index>=size){
			push_back(val);
			return;
		}
		node* prev=head;
		for(int i=0;i<index-1;i++){
			prev=prev->next;
		}
		node* temp=new node;
		temp->data=val;
		temp->next=prev->next;
		prev->next=temp;
		size++;

	}

	void print_kth(int index){
		if(index<0||index>=size){
			cout<<"Out of bound index \n";
			return;
		}
		node* temp=head;
		for(int i=0;i<index;i++){
			temp=temp->next;
		}
		cout<<temp->data;
		return;
	}

	void delete_kth(int index){
		if(index<0||index>=size){
			cout<<"Out of bound index \n";
			return ;
		}
		if(index==0){
			node *temp=head;
			head=head->next;
			delete temp;
			if(index==size-1){
				tail=head;
			}
			size--;
			return ;
		}
		node *prev,*curr=head;
		for(int i=0;i<index;i++){
			prev=curr;
			curr=curr->next;
		}
		prev->next=curr->next;
		delete curr;
		size--;
		if(index==size-1){
			tail=prev;
		}
	}

	void printRecursive(node* head){
		if(head==NULL){
			cout<<endl;
			return;
		}
		printRecursive(head->next); 
		cout<<head->data<<"->";
	}

	void reverse(node* temp){
		if(temp->next==NULL){
			head=temp;

			return;
		}
		reverse(temp->next);
		node* nxt=temp->next;
		nxt->next=temp;
		temp->next=NULL;
		tail=temp;
	}

	int mid(node* head){
		if(head->next==NULL){
			return head->data;
		}
		node *fast=head,*slow=head;
		while(fast->next!=NULL and fast->next->next!=NULL){
			fast=fast->next->next;
			slow=slow->next;
		}
		return slow->data;

	}




};

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	linkedList l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(40);
	// cout<<"Size is "<<l.get_size()<<endl;
	// l.print();
	l.push_front(5);
	cout<<endl;
	l.insert(0,9);
	l.insert(4,9);
	l.insert(2,7);
	l.print_kth(3);

	// l.delete_kth(0);
	// l.delete_kth(0);
	// l.delete_kth(0);
	// l.delete_kth(0);
	// l.delete_kth(0);
	// l.delete_kth(0);
	// l.delete_kth(0);
	cout<<endl;
	l.print();
	// cout<<l.head<<" "<<l.tail;
	cout<<"\nSize is "<<l.get_size();
	cout<<endl;
	l.printRecursive(l.head);
	l.reverse(l.head);
	cout<<endl;
	l.print();
	cout<<endl;
	cout<<l.mid(l.head);
	l.delete_kth(6);
	cout<<endl;
	cout<<l.mid(l.head);


	

	// list<int> li;
	// li.push_back(4);
	// li.push_back(3);
	// li.push_back(7);
	// li.push_back(2);
	// li.push_back(9);
	// sort(li.begin(),li.end());
	// cout<<endl;
	// list<int>::iterator it;
	// for(it=--li.end();it!=--li.begin();it--){
	// 	cout<<*it<<"->";
	// }






	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;
}

