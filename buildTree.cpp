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

class TreeNode{
public:
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int data){
		this->val=data;
		this->left=NULL;
		this->right=NULL;
	}
};

TreeNode* buildTree(TreeNode* root){
	int d;
	cin>>d;
	if(d==-1){
		return root;
	}
	if(root==NULL){
		root=new TreeNode(d);
	}
	root->left=buildTree(root->left);
	root->right=buildTree(root->right);
	return root;
}

void preOrederprint(TreeNode* root){
	if(root==NULL){
		return;
	}
	cout<<root->val<<" ";
	preOrederprint(root->left);
	preOrederprint(root->right);
}
//  iterative way
void inOrderPrint(TreeNode* root){
	if(root==NULL){
		return;
	}
	stack<TreeNode*> stk;
	unordered_map<TreeNode*,bool> mp;
	stk.push(root);
	TreeNode* curr;
	while(!stk.empty()){
		curr=stk.top();
		if(curr->left and mp[curr->left]!=1){
			stk.push(curr->left);
			mp[curr->left]=1;
		}else{
			cout<<curr->val<<" ";
			stk.pop();
			if(curr->right){
				stk.push(curr->right);
			}
			
		}
	}
}

void inorder(TreeNode* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);

}

int countNode(TreeNode* root){
	if(root==NULL){
		return 0;
	}
	int ans=1;
	int left=countNode(root->left);
	int right=countNode(root->right);
	return ans+left+right;
}


int height(TreeNode* root){
	if(root==NULL){
		return -1;
	}

	int left=height(root->left);
	int right=height(root->right);
	return 1+max(left,right);
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....

	TreeNode* root=NULL;
	root=buildTree(root);
	preOrederprint(root);
	cout<<endl;
	inOrderPrint(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	cout<<"No of nodes = "<<countNode(root)<<endl;
	cout<<"Height is "<<height(root);

	






	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;
}

