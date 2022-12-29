#include<iostream>
using namespace std;
typedef struct BTNode {
	char data;
	struct BTNode *lchild;
	struct BTNode *rchild;
}BTNode;
void leaf_node(BTNode *p) {
	int n = 0;
	if (p != nullptr) {
		if (p->lchild == nullptr&&p->rchild == nullptr) {
			++n;
			cout << n << endl;
		}
		leaf_node(p->lchild);
		leaf_node(p->rchild);
	}
} 