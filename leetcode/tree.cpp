#include<iostream>
using namespace std;

typedef struct BTNode {
	int data;
	struct BTNode *lchild;
	struct BTNode *rchild;
}BTNode;
//先序遍历
void preorder(BTNode *p) {
	if (p != nullptr) {
		p->data;
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
//求树的深度
int getDepth(BTNode *p) {
	int pdeep, rdeep;
	if (p == nullptr) {
		return 0;
	}
	else {
		pdeep = getDepth(p->lchild);
		rdeep = getDepth(p->rchild);
		return (pdeep > rdeep ? pdeep : rdeep) + 1;
	}
}
//寻找第k个节点
//先序遍历
void find(BTNode *b,int k) {
	int n = 0;
	if (b != nullptr) {
		++n;
		if (k == n) {
			cout << b->data << endl;
			return;
		}
		find(b->lchild, k);
		find(b->rchild, k);
	}
}
//中序遍历
void find_middle(BTNode *b, int k) {
	int n = 0;
	if (b != nullptr) {
	find_middle(b->lchild,k);
		++n;
		if (k == n) {
			cout << b->data << endl;
			return;
		}
	find_middle(b->rchild, k);
	}
	
}
