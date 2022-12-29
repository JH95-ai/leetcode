#include <iostream>
using namespace std;
typedef struct BTNode {
	char data;
	struct BTNode *lchild;
	struct BTNode *rchild;
}BTNode;
void find_key(BTNode *b,BTNode *&q, int key) {
	if (b == nullptr) {
		cout << "error" << endl;
	}
	if (b->data == key) {
		q = b;
	}
	else {
		
		find_key(b->lchild,q, key);
		if (q == nullptr) {
			find_key(b->rchild, q, key);
		}

	}
}
void find(BTNode *p, BTNode *&q, int key) {
	if (p == nullptr) {
		cout << "error" << endl;
	}
	if (p->data == key) {
		q = p;
	}
	else {
		find(p->lchild, q, key);
		if (q == nullptr) {
			find(p->lchild, q, key);
		}
	}
}