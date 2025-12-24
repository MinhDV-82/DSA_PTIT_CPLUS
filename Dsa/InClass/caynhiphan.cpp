#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Node {
	int data;
	Node *left;
	Node *right;
	
	Node(int x) {
		data = x;
		this->left = NULL;
		right = NULL;
	}
} *head;


void addNode(Node* root, int u, int v, char c) {
	if (root == NULL) return;
	
	if (root->data == u) {
		if (c == 'L') {
			root->left = new Node(v);
		}
		else {
			root->right = new Node(v);
		}
		return;
	}
	
	addNode(root->left, u, v, c);
	addNode(root->right, u, v, c);
}

int n;

void solve() {
	cin >> n;
	for (int i = 1 ; i <= n; i++) {
		int u, v;
		char c;
		cin >> u >> v >> c;
		if (head == NULL) {
			head = new Node(u);
		}
		
		addNode(head, u, v, c);
	}	
}

int main(int argc, char** argv) {

	
	int q;
	cin >> q;
	while(q--) {
		solve();
	}
	return 0;
}