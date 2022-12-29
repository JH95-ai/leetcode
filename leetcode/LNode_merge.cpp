#include <stdlib.h>
typedef struct LNode {
	int data;
	struct LNode *next;
}LNode;
void merge(LNode *A, LNode *B, LNode *&C) {
	LNode *p = A->next;
	LNode *q = B->next;
	LNode *r;
	C = A;
	C->next = NULL;
	free(B);
	r = C;
	while (p != NULL && q != NULL) {
		if (p->data <= q->data)
		{
			r->next = p;
			p = p->next;
			r = r->next;
		}
		else {
			r->next = q;
			q = q->next;
			r = r->next;
		}
	}
	if (p != NULL) : r->next = p;
	if (q != NULL) : r->next = q;
}
//尾插法
void weichafa(LNode *&L, int a[], int n) {
	LNode *r, *s;
	L = (LNode *)malloc(sizeof(LNode));
	L->next = nullptr;
	r = L;
	int i;
	for (i = 0; i < n; ++i) {
		s = (LNode *)malloc(sizeof(LNode));
		s->data = a[i];
		r->next = s;
		r = r->next;
	}
	r->next = nullptr;
}
//头插法
void touchafa(LNode *L, int a[], int n) {
	LNode *r;
	L->next = nullptr;
	int i;
	for (i = 0; i <= n; ++i) {
		r->data = a[i];
		r->next = L->next;
		L->next = r;
	}
}

int SearchAndDelete(LNode *L, int x) {
	LNode *s, *r;
	s = L;
	int i;
	//开始查找
	while (s->next != nullptr) {
		if (s->next->data = x) {
			break;
		}
		s = s->next;
	}
	//查找结束
	if (s->next == nullptr) {
		return 0;
	}
	else {
		r = s->next;
		s->next = r->next->next;
		return 1;
	}
}