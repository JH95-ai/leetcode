//层次遍历，建立一个循环队列
#define maxsize 100
typedef struct BTNode {
	char data;
	struct BTNode *lchild;
	struct BTNode *rchild;
}BTNode;
void level_traverse(BTNode *str) {
	int front, rear;
	front = rear = 0;
	BTNode *p[maxsize];
	BTNode *q;
	if (str != nullptr) {
		rear = (rear + 1)&maxsize;
		p[rear] = str;
		while (front != rear) {
			front = (front + 1) % maxsize;
			q = p[front];
			if (q->lchild != nullptr) {
				rear = (rear + 1) % maxsize;
				p[rear] = q->lchild;
			}
			if (q->rchild != nullptr) {
				rear = (rear + 1) % maxsize;
				p[rear] = q->rchild;
			}
		}

	}
}
void level_traverse(BTNode *f) {
	int front, rear;
	front = rear;
	BTNode *m[maxsize];
	BTNode *n;
	if (f != nullptr) {
		rear = (rear + 1) % maxsize;
		m[rear] = f;
		while (front != rear) {
			front = (front + 1) % maxsize;
			n = m[front];
			if (n->lchild != nullptr) {
				rear = (rear + 1) % maxsize;
				m[rear] = n->lchild;
			}
			if (n->rchild!= nullptr) {
				rear = (rear + 1) % maxsize;
				m[rear] = n->rchild;
			}
		}
	}
}
