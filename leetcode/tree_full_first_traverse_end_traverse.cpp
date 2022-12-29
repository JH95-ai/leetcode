#include<iostream>
using namespace std;
typedef struct BTNode {
	char data;
	struct BTNode *parent;
	struct BTNode *lchild;
	struct BTNode *rchild;
}BTNode;
 