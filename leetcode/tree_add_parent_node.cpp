#include<iostream>
using namespace std;
typedef struct BTNode {
	char data;
	struct BTNode *parent;
	struct BTNode *lchild;
	struct BTNode *rchild;
}BTNode;
void add_parent(BTNode *p, BTNode *q) {
	if (p != nullptr) {
		p->parent = q;
		q = p;
		add_parent(p->lchild, q);
		add_parent(p->rchild, q);
	}
}
void print_node(BTNode *p) {
	if (p != nullptr) {
		cout << p->data << endl;
		p = p->parent;
	}
}
void print_all(BTNode *q) {
	if (q != nullptr) {
		print_node(q);
		print_all(q->lchild);
		print_all(q->rchild);
	}
}