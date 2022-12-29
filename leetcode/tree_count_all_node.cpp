typedef struct BTNode {
	char data;
	struct BTNode *lchild;
	struct BTNode *rchild;
}BTNode;
void count(BTNode *b) {
	int n = 0;
	if (b != nullptr) {
		++n;
		count(b->lchild);
		count(b->rchild);
	}
}