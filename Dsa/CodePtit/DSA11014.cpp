#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Node {
	long long data;
	Node *left;
	Node *right;
	
	Node(long long x) {
		data = x;
		left = NULL;
		right = NULL;
	}
};


void duyet(long long &res, Node *root, char c) {
  if (root == NULL) {
    return;
  }

  if (root -> left == NULL && root -> right == NULL && c == 'r') {
    res += root->data;
    return;
  }
  
  duyet(res, root->left, 'l');
  duyet(res, root->right, 'r');
}

int n;

void solve() {
  	Node *head = NULL;
	cin >> n;
	map<int, Node*> mp;
	for (int i = 1 ; i <= n; i++) {
		int u, v;
		char c;
		cin >> u >> v >> c;
	

		Node* node;
		if (mp.find(u) == mp.end()) {
			node = new Node(u);
			mp[u] = node;
		}
		else {
			node = mp[u];
		}

		if (head == NULL) {
			head = node;
		}
		
		Node* newNode = new Node(v);
		if (c == 'L') {
			node->left = newNode;
		}
		else node->right = newNode;

		mp[v] = newNode;

		
	}
	
	long long res = 0;
	duyet(res, head, 's');
	cout << res << '\n';
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int q;
	cin >> q;
	while(q--) {
		solve();
	}
	return 0;
}