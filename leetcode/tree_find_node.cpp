#include <iostream>
using namespace std;
typedef struct BTNode {
	char data;
	struct BTNode *lchild;
	struct BTNode *rchild;
}BTNode;
void find_node_k(BTNode *b, int k) {
	int n = 0;
	if (b != nullptr) {
		++n;
		if (k == n) {
			cout << b->data << endl;
			return;
		}
		find_node_k(b->lchild, k);
		find_node_k(b->rchild, k);
	}
}